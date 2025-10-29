#include <string.h>
#include <ctype.h>
#include <iostream>
#include "C:\Users\Пользователь\OneDrive\Desktop\laba1\laba1.h"
using namespace std;

void fileProcess() {
	FILE* f1, * f2;
	char str[100];

	fopen_s(&f1, "laba1file1.txt", "r");
	if (!f1) {
		cout << "Failed to open file1\n";
	}

	fopen_s(&f2, "laba1file2.txt", "w");
	if (!f2) {
		cout << "Failed to open file2\n";
	}

	fgets(str, sizeof(str), f1);
	fclose(f1);

	char key = 0;
	bool flag = false;
	int strLen = strlen(str);
	int i = 0;
	int r = 0;
fromstart:
	for (i; i < strLen - 1; i++)
	{
		if (str[i] == str[i + 1] && !isdigit(str[i]) && str[i] != '+' && str[i] != '-')
		{
			flag = true;
			key = str[i];
			if (i == 0 && r == 0) 
			{
				r++;
				goto fromstart;
			}
			int j = i;
			while (str[j] == str[i])
			{
				j++;
			}
			while (str[j] != '\0') 
			{
				str[i++] = str[j++];
			}
			str[i] = '\0';
			strLen = strlen(str);
			i = -1;

			for (int i = 0; i < strLen - 1; i++)
			{
				if (str[i] == key)
				{
					int j = i;
					for (j; j < strLen; j++)
					{
						str[j] = str[j + 1];
					}
				}
			}
		}
	}

	str[strLen] = '\0';

	if (flag == false) 
	{
		str[strLen] = '*';
		str[strLen + 1] = '\0';
	}
	fputs(str, f2);
	fclose(f2);

}