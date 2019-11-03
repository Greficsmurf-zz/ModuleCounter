#pragma once
#include <string>;
using namespace std;
class ModuleDigit
{
public:
	ModuleDigit() {
		maxValue = 0;
		incValue = 1;
		counterName = "default";
	}
	ModuleDigit(int value, string counterName) {
		maxValue = value;
		incValue = 1;
	}

	int getMaxValue() {
		return maxValue;
	}
	void setMaxValue(int value) {
		maxValue = value;
	}

	string getCounterName() {
		return counterName;
	}
	void setCounterName(string name) {
		counterName = name;
	}

	int getIncValue() {
		return incValue;
	}
	void setIncValue(int value) {
		incValue = value;
	}

private:
	int maxValue;
	int incValue;
	string counterName;
};

