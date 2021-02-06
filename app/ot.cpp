//	ObjectTalk Scripting Language
//	Copyright 1993-2021 Johan A. Goossens
//
//	Licensed under the Apache License, Version 2.0 (the "License");
//	you may not use this file except in compliance with the License.
//	You may obtain a copy of the License at
//
//		http://www.apache.org/licenses/LICENSE-2.0
//
//	Unless required by applicable law or agreed to in writing, software
//	distributed under the License is distributed on an "AS IS" BASIS,
//	WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
//	See the License for the specific language governing permissions and
//	limitations under the License.


//
//	Include files
//

#include "Ot.h"


//
//	ObjectTalk engine main function
//

int main(int argc, const char* argv[]) {
	// ensure we have some arguments
	if (argc == 1) {
		std::wcerr << argv[0] << ": usage: " << argv[0] << " script ..." << std::endl;
		exit(EXIT_FAILURE);
	}

	// build module path
	OtObjectTalk::buildModulePath(argv);

	try {
		// run each script
		for (auto c = 1; c < argc; c++) {
			OtObjectTalk::runFile(argv[c]);
		}

	} catch (const OtException& e) {
		// handle all failures
		std::wcerr << argv[0] <<": error: " << e.what() << std::endl;
		exit(EXIT_FAILURE);
	}

	return 0;
}
