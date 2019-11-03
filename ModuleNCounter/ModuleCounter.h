#pragma once

#include <string>
#include <iostream>
#include "ModuleDigit.h"
using namespace std;
class ModuleCounter
{
public:
	ModuleCounter& operator++();
	ModuleCounter operator--();

	ModuleCounter operator++(int);
	ModuleCounter operator--(int);

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
inline
ModuleCounter ModuleCounter::operator++(int)
{
	ModuleCounter c = *this;
	currentValue += _digit.getIncValue();
	if (currentValue == _digit.getMaxValue()) {
		currentValue = 0;
	}
	return c;
}
inline
ModuleCounter ModuleCounter::operator--()
{
	currentValue -= _digit.getIncValue();
	if (currentValue == _digit.getMaxValue()) {
		currentValue = 0;
	}
	return *this;
}
inline
ModuleCounter ModuleCounter::operator--(int)
{
	ModuleCounter c = *this;
	currentValue -= _digit.getIncValue();
	if (currentValue == _digit.getMaxValue()) {
		currentValue = 0;
	}
	return c;
}