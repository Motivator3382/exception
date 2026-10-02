#pragma once
#include <string>
using namespace std;

class ArrayValueCalculator
{
private:
	int count_row = 4;
	int count_col = 4;
	string** ptr;
public:
	ArrayValueCalculator(string** ptr, const int count_row, const int count_col);
	void doCalc();
	void Print() const;
	~ArrayValueCalculator();
};

