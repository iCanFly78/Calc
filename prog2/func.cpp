#include <iostream>
#include "func.h"
#include <Windows.h>

using namespace std;

void init(void)
{
	setlocale(LC_ALL, "Russian");
	cin.exceptions(cin.failbit);
}

float getvar(char name[])
{
	float output = 0;
	
	try
	{
		cout << "Введите значение " << name << ":";
		cin >> output;
		cout << "Спасибо. Переход к следующему значению" << endl;
		return(output);
	}
	catch (...)
	{
		char BadIn[100];
		cerr << "Введенное значение не является числом!" << endl;
		cin.clear();
		cin >> BadIn;
		return (-2.8163264);
	}

}