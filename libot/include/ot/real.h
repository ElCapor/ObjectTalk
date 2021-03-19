//	ObjectTalk Scripting Language
//	Copyright (c) 1993-2021 Johan A. Goossens. All rights reserved.
//
//	This work is licensed under the terms of the MIT license.
//	For a copy, see <https://opensource.org/licenses/MIT>.


#pragma once


//
//	Include files
//

#include <cmath>

#include "exception.h"
#include "numbers.h"
#include "primitive.h"


//
//	OtReal
//

class OtRealClass;
typedef std::shared_ptr<OtRealClass> OtReal;

class OtRealClass : public OtPrimitiveClass {
public:
	// constructors
	OtRealClass() = default;
	OtRealClass(double real) : value(real) {}

	// convertors
	operator bool() { return value != 0.0; }
	operator int() { return (int) value; }
	operator long() { return long(value); }
	operator size_t() { return (size_t) value; }
	operator double() { return value; }
	operator std::string() {return std::to_string(value); }

	// comparison
	bool equal(double operand) { return value == operand; }
	bool notEqual(double operand) { return value != operand; }
	bool greaterThan(double operand) { return value > operand; }
	bool lessThan(double operand) { return value < operand; }
	bool greaterEqual(double operand) { return value >= operand; }
	bool lessEqual(double operand) { return value <= operand; }

	// arithmetic
	double add(double operand) { return value + operand; }
	double subtract(double operand) { return value - operand; }
	double multiply(double operand) { return value * operand; }
	double divide(double operand) { if (operand == 0.0) OT_EXCEPT0("Divide by zero"); return value / operand; }
	double power(double operand) { return std::pow(value, operand); }

	// functions
	double negate() { return -value; }
	double abs() { return std::abs(value); }
	long sign() { return (0.0 < value) - (value < .00); }
	long round() { return std::round(value); }
	long ceil() { return std::ceil(value); }
	long floor() { return std::floor(value); }
	long trunc() { return std::trunc(value); }

	double sin() { return std::sin(value); }
	double cos() { return std::cos(value); }
	double tan() { return std::tan(value); }
	double asin() { return std::asin(value); }
	double acos() { return std::acos(value); }
	double atan() { return std::atan(value); }
	double radians() { return value * std::numbers::pi / 180.0; }
	double degrees() { return value / std::numbers::pi * 180.0; }

	double log() { if (value <= 0.0) OT_EXCEPT0("Log requires number > zero"); return std::log(value); }
	double exp() { return std::exp(value); }
	double log10() { if (value <= 0.0) OT_EXCEPT0("Log10 requires number > zero"); return std::log10(value); }

	std::string toFixed(size_t precision);

	// get type definition
	static OtType getMeta();

	// create a new object
	static OtReal create(double value);

private:
	double value = 0.0;
};
