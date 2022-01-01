#	ObjectTalk Scripting Language
#	Copyright (c) 1993-2021 Johan A. Goossens. All rights reserved.
#
#	This work is licensed under the terms of the MIT license.
#	For a copy, see <https://opensource.org/licenses/MIT>.

SRC=$(wildcard app/*.cpp libot/*/*.cpp modules/*/*.cpp  modules/*/*/*.cpp)
INC=$(wildcard libot/include/*.h libot/include/ot/*.h modules/*/*.h modules/*/*/*.h)
TST=$(wildcard tests/*/*.ot)

.PHONY: debug release xcode gui docs cleanup alpine ubuntu clean distclean

debug:
	cmake -Bdebug -Wno-dev -DCMAKE_BUILD_TYPE=Debug
	cd debug && make

release:
	cmake -Brelease -Wno-dev -DCMAKE_BUILD_TYPE=Release
	cd release && make

xcode:
	cmake -Bxcode -Wno-dev -GXcode -DCMAKE_BUILD_TYPE=Debug

vs:
	cmake -Bvs -Wno-dev -G "Visual Studio 17 2022" -A x64 -DCMAKE_BUILD_TYPE=Debug
	cd vs && cmake --build .

gui:
	cmake -Bdebug -Wno-dev -DOT_GUI=ON -DCMAKE_BUILD_TYPE=Debug
	cd debug && make

test: debug
	cd debug && make test

rtest: release
	cd release && make test

install: release
	cd release && make install/strip
	ls -l /usr/local/bin/ot
	ls -l /usr/local/lib/libot.*
	ls -l /usr/local/lib/ot

docs:
	pugger --theme manual --assets --out docs docs-src

cleanup:
	perl -i -pe 's/\s+\n/\n/' $(SRC) $(INC) $(TST)
	ls $(SRC) $(INC) $(TST) | xargs -o -n 1 vim -c 'set ts=4|set noet|%retab!|wq'

alpine:
	cd docker/alpine && ./run

ubuntu:
	cd docker/ubuntu && ./run

clean:
	rm -rf debug release xcode vs

distclean: clean
	cd docker/alpine && ./clean
	cd docker/ubuntu && ./clean
	docker builder prune --force
