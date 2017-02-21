
#include <iostream>
#include <conio.h>
#include "func.h"
using namespace std;


int main()
{
	init();
	
	int ReturnCode = 0; // return code
	float a=0, b=0, c=0;
	char sch; // Stop character
	
	int UserChoice = 999;

	
	while (UserChoice != 0) 
	{ 
		UserChoice = GetUserChoice();
		Calc(UserChoice);
	};

	
    //	cout << "Для выхода из программы нажмите любую клавишу ..." << endl;;
	//_getch();
	return ReturnCode;
}