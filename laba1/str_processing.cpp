#include <iostream>
#include "C:\Users\Пользователь\OneDrive\Desktop\laba1\laba1.h"
using namespace std;

void strProcess(char* str)
{
	bool flag = false;
	char key = 0;
	int strLen = strlen(str);
	int r = 0;
fromstart:
	for (int i = 0; i < strLen - 1; i++)
	{
		if (str[i] == str[i + 1] && !isdigit(str[i]) && str[i] != '+' && str[i] != '-')
		{
			flag = true;
			key = str[i];
			
			int j = i;
			while (str[j] == str[i])
			{
				j++;
			}
			while (str[j] != '\0') 
			{
				str[i++] = str[j++];
			}
			if (i == 0 && r == 0)
			{
				r++;
				goto fromstart;
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
	if (flag == false)
	{
		int len = strlen(str);
		str[len] = '*';
		str[len + 1] = '\0';
	}
}