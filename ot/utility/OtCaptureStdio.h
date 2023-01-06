//	ObjectTalk Scripting Language
//	Copyright (c) 1993-2023 Johan A. Goossens. All rights reserved.
//
//	This work is licensed under the terms of the MIT license.
//	For a copy, see <https://opensource.org/licenses/MIT>.


#pragma once


// https://stackoverflow.com/questions/5419356/redirect-stdout-stderr-to-a-string


//
//	Include files
//

#if defined(_WIN32)
#include <io.h>
#define popen _popen
#define pclose _pclose
#define stat _stat
#define dup _dup
#define dup2 _dup2
#define fileno _fileno
#define close _close
#define pipe _pipe
#define read _read
#define eof _eof
#else
#include <unistd.h>
#endif

#include <fcntl.h>
#include <functional>
#include <cstdio>
#include <chrono>
#include <thread>

#ifndef STD_OUT_FD
#define STD_OUT_FD (fileno(stdout))
#endif

#ifndef STD_ERR_FD
#define STD_ERR_FD (fileno(stderr))
#endif


//
//	OtCaptureStdio
//

class OtCaptureStdio {
public:
	OtCaptureStdio(FILE* s, int f, std::function<void(const char*, size_t)> c) : stream(s), fd(f), callback(c) {
		// make output stream unbuffered, so that we don't need to flush
		// the streams before capture and after capture (fflush can cause a deadlock)
		setvbuf(stream, NULL, _IONBF, 0);

		// start capturing
		securePipe(pipes);
		streamOld = secureDup(fd);
		secureDup2(pipes[WRITE], fd);

#if !defined(_WIN32)
		secureClose(pipes[WRITE]);
#endif
	}

	~OtCaptureStdio() {
		// end capturing
		secureDup2(streamOld, fd);

		const size_t bufSize = 1025;
		char buf[bufSize];
		ssize_t bytesRead = 0;
		bool fd_blocked(false);

		do {
			bytesRead = 0;
			fd_blocked = false;

#if defined(_WIN32)
			if (!eof(pipes[READ])) {
				bytesRead = read(pipes[READ], buf, bufSize - 1);
			}
#else
			bytesRead = read(pipes[READ], buf, bufSize - 1);
#endif

			if (bytesRead > 0) {
				buf[bytesRead] = 0;
				callback(buf, bytesRead);

			} else if (bytesRead < 0) {
				fd_blocked = (errno == EAGAIN || errno == EWOULDBLOCK || errno == EINTR);

				if (fd_blocked) {
					std::this_thread::sleep_for(std::chrono::milliseconds(10));
				}
			}
		} while(fd_blocked || bytesRead == (bufSize - 1));

		secureClose(streamOld);
		secureClose(pipes[READ]);

#if defined(_WIN32)
		secureClose(pipes[WRITE]);
#endif
	}

private:
	FILE* stream;
	int fd;

	enum PIPES { READ, WRITE };

	int pipes[2];
	int streamOld;

	std::function<void(const char*, size_t)> callback;

	int secureDup(int src) 	{
		int ret = -1;

		do {
			ret = dup(src);

			if (errno == EINTR || errno == EBUSY) {
				std::this_thread::sleep_for(std::chrono::milliseconds(10));
			}
		} while (ret < 0);

		return ret;
	}

	void securePipe(int * pipes) {
		int ret = -1;

		do {
#if defined(_WIN32)
			ret = pipe(pipes, 65536, O_BINARY);
#else
			ret = pipe(pipes) == -1;
#endif

			if (errno == EINTR ||  errno == EBUSY) {
				std::this_thread::sleep_for(std::chrono::milliseconds(10));
			}
		} while (ret < 0);
	}

	void secureDup2(int src, int dest) {
		int ret = -1;

		do {
			ret = dup2(src, dest);

			if (errno == EINTR ||  errno == EBUSY)
				std::this_thread::sleep_for(std::chrono::milliseconds(10));
		} while (ret < 0);
	}

	void secureClose(int & fd) {
		int ret = -1;

		do {
			ret = close(fd);

			if (errno == EINTR) {
				std::this_thread::sleep_for(std::chrono::milliseconds(10));
			}
		} while (ret < 0);

		fd = -1;
	}
};


//
//	OtCaptureStdout
//

class OtCaptureStdout : public OtCaptureStdio {
public:
	OtCaptureStdout(std::function<void(const char*, size_t)> callback) : OtCaptureStdio(stdout, STD_OUT_FD, callback) {}
};


//
//	OtCaptureStderr
//

class OtCaptureStderr : public OtCaptureStdio {
public:
	OtCaptureStderr(std::function<void(const char*, size_t)> callback) : OtCaptureStdio(stderr, STD_ERR_FD, callback) {}
};
