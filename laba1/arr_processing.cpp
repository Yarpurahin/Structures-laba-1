#include <iostream>
#include "C:\Users\Пользователь\OneDrive\Desktop\laba1\laba1.h"
using namespace std;


void arrProcess(char* arr) {
    int arrLen = strlen(arr);
    bool flag = false;
    char key = 0;
    int r = 0;
    fromstart:
    for (int i = 0; i < arrLen - 1; i++) {
        if ((arr[i] == arr[i + 1]) && !isdigit(arr[i]) && arr[i] != '+' && arr[i] != '-') 
        {
            flag = true;
            key = arr[i];
            if (i == 0 && r == 0) {
                r++;
                goto fromstart;
            }
            
            int j = i + 1;
            while (j < arrLen && arr[j] == key)
                j++;

            memmove(arr + i + 1, arr + j, arrLen - j + 1);
            
            arrLen = strlen(arr);
            i = -1;
            

            for (int i = 0; i < arrLen - 1; i++)
                {
                    if (arr[i] == key)
                	{
                		int j = i;
                		for (j; j < arrLen; j++)
                		{
                			arr[j] = arr[j + 1];
                		}
                	}
                }
        }
    }
    if (arr[0] == key) arr[0] = '\n';

    if (!flag) 
    {
        arr[arrLen] = '*';
        arr[arrLen + 1] = '\0';
    }

}
