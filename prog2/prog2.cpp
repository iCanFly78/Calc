
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

	cout << "����� ����� A+B+C �����: " << a + b + c << endl;

	cout << "��� ������ �� ��������� ������� ����� ������� ..." << endl;;
	cin >> sch;
	return ReturnCode;
}