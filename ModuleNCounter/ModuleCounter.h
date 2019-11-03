#pragma once

#include <string>
#include <iostream>
#include "ModuleDigit.h"
using namespace std;
class ModuleCounter
{
public:
	ModuleCounter &operator++();

	ModuleCounter(ModuleDigit& digit) {
		_digit = digit;
		currentValue = -1;
	}


	int getValue() {
		return currentValue;
	}

	void resetCounter() {
		currentValue = 0;
	}

private:
	int currentValue;
	ModuleDigit _digit;

};

inline
ModuleCounter& ModuleCounter::operator++() {
	currentValue += _digit.getIncValue();
	if (currentValue == _digit.getMaxValue()) {
		currentValue = 0;
	}
	return *this;
}
