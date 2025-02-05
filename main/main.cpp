//	ObjectTalk Scripting Language
//	Copyright (c) 1993-2023 Johan A. Goossens. All rights reserved.
//
//	This work is licensed under the terms of the MIT license.
//	For a copy, see <https://opensource.org/licenses/MIT>.


//
//	Include files
//

#include <filesystem>

#include <argparse/argparse.hpp>

#include "OtCompiler.h"
#include "OtFormat.h"
#include "OtLibuv.h"
#include "OtLog.h"
#include "OtModule.h"

#include "OtHttpModule.h"

#if defined(INCLUDE_GUI)
#include "OtFramework.h"
#include "OtSceneApp.h"
#include "OtWorkspace.h"
#endif


//
//	ObjectTalk main function
//

int main(int argc, char* argv[]) {
	// log calling parameters
	for (auto i = 0; i < argc; i++) {
		OtLogDebug(OtFormat("argv[%d]: %s", i, argv[i]));
	}

	// parse all command line parameters
	argparse::ArgumentParser program(argv[0], "0.2");

	program.add_argument("-d", "--disassemble")
		.help("disassemble bytecode")
		.default_value(false)
		.implicit_value(true);

	program.add_argument("-i", "--ide")
		.help("edit files instead of running them")
		.default_value(false)
		.implicit_value(true);

	program.add_argument("-c", "--child")
		.help("run program as an IDE child process")
		.default_value(false)
		.implicit_value(true);

	program.add_argument("files")
		.help("files to process")
		.remaining();

	try {
		program.parse_args(argc, argv);

	} catch (const std::runtime_error& err) {
		OtLogFatal(err.what());
	}

	// get all the target filenames
	std::vector<std::string> files;

	try {
		files = program.get<std::vector<std::string>>("files");

	} catch (std::logic_error& e) {
	}

	// configure logging engine
	OtLogger::instance()->setSubprocessMode(program["--child"] == true);

	try {
		// initialize libuv
		OtLibUv::init(argc, argv);

		// register HTTP module
		OtHttpModuleRegister();

		// where any files specified?
		if (files.size() == 0) {
			// no, do we start an IDE workspace?
#if defined(INCLUDE_GUI)
			OtFramework framework;
			OtWorkspace workspace;
			framework.run(&workspace);

#else
	OtLogFatal("No files specified");
#endif


		} else {
#if defined(INCLUDE_GUI)
			if (program["--ide"] == true) {
				OtFramework framework;
				OtWorkspace workspace;

				for (auto& file : files) {
					workspace.openFile(file);
				}

				framework.run(&workspace);

			} else {
#endif
				// we can only handle one file
				if (files.size() != 1) {
					OtLogFatal(OtFormat("Error: you can only run one file, you specified [%d]", files.size()));
				}

				// run the file
				auto file = std::filesystem::path(files[0]);
				auto extension = file.extension();

				// execute by type (based by the file extension)
				if (extension == ".ot" || extension == "") {
					// handle a script file
					if (program["--disassemble"] == true) {
						// don't run; just compile, optimize and disassemble bytecode
						OtCompiler compiler;
						auto object = OtObject::create();
						auto bytecode = compiler.compileFile(file, object, true);

					} else {
						// compile, optimize and run script as a module
						// (to ensure relative import paths work)
						auto module = OtModule::create();
						module->load(file);
						module->unsetAll();
					}

#if defined(INCLUDE_GUI)
				} else if (extension == ".ots") {
					// handle a scene file
					OtFramework framework;
					OtSceneApp app{std::filesystem::path(file)};
					framework.run(&app, program["--child"] == true);
#endif

				} else {
					OtLogFatal(OtFormat("Error: can't execute file with extension [%s]", extension.string().c_str()));
				}
#if defined(INCLUDE_GUI)
			}
#endif
		}

		// cleanup
		OtLibUv::end();

	} catch (OtException& e) {
		// handle all failures
		if (program["--child"] == true) {
			// serialize exception and send it to the IDE that started us
			// (wrapped in STX (start of text) and ETX (end of text) ASCII codes)
			std::cerr << '\x02' << e.serialize() << '\x03';
		}

		// output human readable text
		OtLogFatal(OtFormat("Error: ", e.what()));
	}

	return 0;
}
