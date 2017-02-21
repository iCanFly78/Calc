#include <iostream>
#include <stdio.h>
#include <conio.h>
#include "func.h"
#include <Windows.h>

using namespace std;

void init(void)
{
	setlocale(LC_ALL, "Russian");
	cin.exceptions(cin.failbit);
}

double getvar(char name[])
{
	double output = 0;
	
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

int GetUserChoice(void)
{
	int UsCh = 0;
	
	while (UsCh<48 || UsCh>52)
	{
		system("cls");
		cout << "Выберите тип операции: " << endl;
		cout << "1. Сложение (1)" << endl;
		cout << "2. Вычитание (2)" << endl;
		cout << "3. Умножение (3)" << endl; // multiplication
		cout << "4. Деление (4)" << endl;	// division 
		cout << "0. Выход из программы (0)" << endl << endl;
		
		UsCh = _getch();
		switch (UsCh)
		{
		case 49: cout << "Выбрано 1" << endl; break;
		case 50: cout << "Выбрано 2" << endl; break;
		case 51: cout << "Выбрано 3" << endl; break;
		case 52: cout << "Выбрано 4" << endl; break;
		case 48: cout << "Завершение работы" << endl; break;
		default: cout << "Неверная команда!" << " Была нажата клавиша:" << UsCh; break;
		}
	} 
	
	
	if (UsCh == 49) { UsCh = 1; };
	if (UsCh == 50) { UsCh = 2; };
	if (UsCh == 51) { UsCh = 3; };
	if (UsCh == 52) { UsCh = 4; };
	if (UsCh == 48) { UsCh = 0; };
	
	return UsCh;
}	

int Calc(int Choice) // Входящая переменная номер выбора пользователем, исходящая ответ
{
	const double bad = -2.8163264;
	double ret = 0;
	double a, b, c = 0;


	switch (Choice)
	{
	case 1:
		do { a = getvar("A"); } while (a == bad);
		do { b = getvar("B"); } while (b == bad);
		do { c = getvar("C"); } while (c == bad);
		cout << "Результат сложения чисел A+B+C равен: " << a + b + c << endl;
		ret = 0;
		break;

	case 2:
		do { a = getvar("A"); } while (a == bad);
		do { b = getvar("B"); } while (b == bad);
		do { c = getvar("C"); } while (c == bad);
		cout << "Результат вычитания чисел A-B-C равен: " << a - b - c << endl;
		ret = 0;
		break;

	case 3:
		do { a = getvar("A"); } while (a == bad);
		do { b = getvar("B"); } while (b == bad);
		do { c = getvar("C"); } while (c == bad);
		cout << "Результат произведения чисел A*B*C равен: " << a * b * c << endl;
		ret = 0;
		break;

	case 4:
		do { a = getvar("A"); } while (a == bad);
		do { b = getvar("B"); } while (b == bad);
		do { c = getvar("C"); } while (c == bad);
		cout << "Результат деления чисел A/B/C равен: " << a / b / c << endl;
		ret = 0;
		break;
	
	case 0:
		cout << "Выход из программы..." << endl;
		ret = bad;
		break;
	default: break;
	}
	cout << "Для Продолжения нажмите любую клавишу ..." << endl;
	_getch();
	return ret;
}