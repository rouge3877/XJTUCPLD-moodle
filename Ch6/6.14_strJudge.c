/*
编一个程序，将两个字符串s1和s2比较，
若s1>s2，输出一个正数；若s1=s2，输出0；若s1
格式要求：
先输出“input string1:”
用户在其后输入And后隔行输出“input string2:”
用户在其后输入Aid后隔行输出“result:5.”
*/
#include <stdio.h>
#include <string.h>
// #include<stdlib.h>
#define LENGTH 100

int main(void)
{

    char str1[LENGTH];
    char str2[LENGTH];
    int i;

    // str1的读入
    printf("input string1:");
    for (i = 0; i < LENGTH; i++)
    {
        scanf("%c", &str1[i]);
        if (str1[i] == '\n')
            break;
    }
    str1[i] = '\0';

    // str2的读入
    printf("\ninput string2:");
    for (i = 0; i < LENGTH; i++)
    {
        scanf("%c", &str2[i]);
        if (str2[i] == '\n')
            break;
    }
    str2[i] = '\0';

    // 判断并输出
    int strlens = strlen(str1) < strlen(str2) ? strlen(str1) : strlen(str2);
    for (i = 0; i < strlens; i++)
    {
        if (str1[i] == str2[i])
            continue;
        else
        {
            printf("\nresult:%d.", str1[i] - str2[i]);
            break;
        }
    }

    // system("PAUSE");
    return 0;
}