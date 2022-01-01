//	ObjectTalk Scripting Language
//	Copyright (c) 1993-2022 Johan A. Goossens. All rights reserved.
//
//	This work is licensed under the terms of the MIT license.
//	For a copy, see <https://opensource.org/licenses/MIT>.


#pragma once


//
//	Include files
//

#include "object.h"
#include "bytecode.h"
#include "global.h"
#include "stack.h"


//
//	The ObjectTalk Virtual Machine
//


class OtVM {
public:
	// execute bytecode in the virtual machine
	static OtObject execute(OtByteCode bytecode, size_t callingParameters=0);

	// call a member function on an object with arguments
	template<typename... ARGS>
	static OtObject callMemberFunction(OtObject target, const std::string& member, ARGS... args) {
		const size_t count = sizeof...(ARGS) + 1;
		auto stack = getStack();
		stack->push(target);
		(stack->push(args), ...);
		auto result = target->get(member)->operator () (count, stack->sp(count));
		stack->pop(count);
		return result;
	}

	static inline OtObject callMemberFunction(OtObject target, OtObject member, size_t count, OtObject* args) {
		auto stack = getStack();
		stack->push(target);

		for (auto c = 0; c < count; c ++) {
			(stack->push(args[c]));
		}

		count++;
		auto result = member->operator () (count, stack->sp(count));
		stack->pop(count);
		return result;
	}

	// redirect member function to a new target
	static inline OtObject redirectMemberFunction(OtObject target, OtObject member, size_t count) {
		auto sp = getStack()->sp(count + 1);
		*sp = target;
		return member->operator () (count + 1, sp);
	}

	static inline OtObject redirectMemberFunction(OtObject target, const std::string& member, size_t count) {
		auto sp = getStack()->sp(count + 1);
		*sp = target;
		return target->get(member)->operator () (count + 1, sp);
	}

	static OtGlobal getGlobal();
	static OtStack getStack();
	static OtObject getNull();
};
