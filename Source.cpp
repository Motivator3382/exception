#include "ArrayValueCalculator.h"
#include "Exception.h"
#include "ArraySizeException.h"
#include "ArrayDataException.h"
#include <iostream>
using namespace std;

int main() {
	string** _ptr = new string * [5];;
	ArrayValueCalculator* calc = new ArrayValueCalculator(_ptr, 5, 5);
	calc->doCalc();
	calc->Print();

	delete calc;
	return 0;
}