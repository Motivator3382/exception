#include "ArrayValueCalculator.h"
#include "Exception.h"
#include "ArraySizeException.h"
#include "ArrayDataException.h"
#include <iostream>
using namespace std;

#pragma warning(disable : 4996)

void ArrayValueCalculator::doCalc()
{
	try {
		if (count_row < 0 or count_col < 0) {
			throw ArraySizeException("count_row of array is negative");
		}
		if (count_row < 4 or count_col < 4) {
			throw ArraySizeException("count_row of array is too small");
		}
		if (count_row > 4 or count_col > 4) {
			throw ArraySizeException("count_row of array now is over big");
		}

		for (int i = 0; i < count_row; i++)
		{
			for (int j = 0; j < count_col; j++)
			{
				try {
					int number = stoi(ptr[i][j]);
					if (number < 0 or number > 9) {
						//// preparing
						//const char* _template = "(Row No: , Col No: ) isn't nubmer; Converter get wrong data";
						//char row = i + '0';
						//char col = j + '0';
						//char* _out = new char[100];
						////adding coordinates
						//strncpy(_out, _template, 9);
						//_out[9] = row;
						//strncpy(_out, _template + 9 + 1, 10);
						//_out[19] = col;
						//strncpy(_out, _template + 19 + 1, 40);
						//_out[62] = '\0';

						string _out = "(Row No : " + std::to_string(i+1) +
							", Col No: " + std::to_string(j+1) +
							") isn't number; Converter got wrong data";
						throw ArrayDataException(_out);
					}
				}
				catch (std::invalid_argument) {
					string _out = "(Row No : " + std::to_string(i+1) +
						", Col No: " + std::to_string(j+1) +
						") is an invalid arg";
					throw ArrayDataException(_out);
				}
				catch (std::out_of_range) {
					throw ArraySizeException("Value is out of range");
				}
			}
		}
	}
	catch (ArrayDataException exce) {
		cout << exce.GetMessage() << endl;
	}
	catch (ArraySizeException exce) {
		cout << exce.GetMessage() << endl;
	}

}

ArrayValueCalculator::ArrayValueCalculator(string** ptr, const int cr, const int cl)
{
	this->ptr = ptr;
	count_row = cr;
	count_col = cl;
	this->ptr[0] = new string[count_col]{ "1", "2", "3", "4" };
	this->ptr[1] = new string[count_col]{ "5", "6", "3", "5" };
	this->ptr[2] = new string[count_col]{ "4", "2", "3", "4" };
	this->ptr[3] = new string[count_col]{ "7", "2", "3", "4" };
}

void ArrayValueCalculator::Print() const
{
	try {
		if (count_row < 0 or count_col < 0) {
			throw ArraySizeException("count_row of array is negative");
		}
		if (count_row < 4 or count_col < 4) {
			throw ArraySizeException("count_row of array is too small");
		}
		if (count_row > 4 or count_col > 4) {
			throw ArraySizeException("count_row of array now is over big");
		}
		for (int i = 0; i < count_row; i++)
		{
			for (int j = 0; j < count_col; j++)
			{
				cout << ptr[i][j] << ' ';
			}
			cout << endl;
		}
	}
	catch (ArrayDataException exce) {
		cout << exce.GetMessage() << endl;
	}
	catch (ArraySizeException exce) {
		cout << exce.GetMessage() << endl;
	}
}

ArrayValueCalculator::~ArrayValueCalculator()
{
	try {
		if (count_row < 0 or count_col < 0) {
			throw ArraySizeException("count_row of array is negative");
		}
		if (count_row < 4 or count_col < 4) {
			throw ArraySizeException("count_row of array is too small");
		}
		if (count_row > 4 or count_col > 4) {
			throw ArraySizeException("count_row of array now is over big");
		}
		for (int i = 0; i < count_row; i++)
		{
			delete[] this->ptr[i];
		}
		delete[] this->ptr;
	}
	catch (ArrayDataException exce) {
		cout << exce.GetMessage() << endl;
	}
	catch (ArraySizeException exce) {
		cout << exce.GetMessage() << endl;
	}
}
