#include <iostream>
#include <string.h>
#include <string>
#include <fstream>
#include <ctype.h>
#include <cctype>
#include "C:\Users\Пользователь\OneDrive\Desktop\laba1\laba1.h"


using namespace std;


int input(char* str_stroka, char arr_stroka[100])
{
	cout << "Enter the string (str): ";
	cin >> str_stroka;

	cout << "Enter the string (arr): ";
	cin.getline(arr_stroka, 100) >> arr_stroka;

	return 0;
}



int main()
{
	char str_stroka[] = "initial value";
	char arr_stroka[100];
	input(str_stroka, arr_stroka);

	arrProcess(arr_stroka);
	strProcess(str_stroka);
    fileProcess();

	cout << str_stroka << '\n';
	cout << arr_stroka << '\n';
;
	return 1;
}