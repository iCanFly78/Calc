
#include <iostream>
#include "func.h"
using namespace std;


int main()
{
	init();
	
	int ReturnCode = 0; // return code
	float a=0, b=0, c=0;
	char sch; // Stop character
	const float bad=-2.8163264;
	
	do {a = getvar("A");} while (a==bad);
	do {b = getvar("B");} while (b == bad);
	do {c = getvar("C");} while (c == bad);

	cout << "Сумма чисел A+B+C равна: " << a + b + c << endl;

	cout << "Для выхода из программы нажмите любую клавишу ..." << endl;;
	cin >> sch;
	return ReturnCode;
}