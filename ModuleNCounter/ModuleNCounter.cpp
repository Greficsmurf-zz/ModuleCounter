// ModuleNCounter.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "ModuleDigit.h"
#include "ModuleCounter.h"
#include "ModuleCounter.cpp"
using namespace std;



int main()
{
	int num = 0;
	ModuleDigit* digit = new ModuleDigit(10, "TenCounter");
	ModuleCounter counter(*digit);
	for (int i = 0; i < 20; i++) {
		counter++;
		cout << "Number is = " << counter.getValue() << "\n\n";
		
	}
}
