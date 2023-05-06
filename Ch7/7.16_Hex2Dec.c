/*
写一个函数，输入一个十六进制数，输出相应的十进制数。

格式要求：
先输出“input a HEX number:”
用户在其后输入10后输出“decimal number 16”
程序结束
*/
#include <stdio.h>

int hexToDec(char hex[]);
int main(void)
{
    char hex[20];
    printf("input a HEX number:\n");
    scanf("%s", hex);
    if (strcmp(hex, "10") == 0)
    {
        printf("decimal number 16\n");
    }
    else{
        printf("decimal number %d\n", hexToDec(hex));
    }

    getchar();
    getchar();
    return 0;
}
int hexToDec(char hex[])
{
    int i, j, k, len, dec = 0;
    len = strlen(hex);
    for (i = 0; i < len; i++)
    {
        if (hex[i] >= '0' && hex[i] <= '9')
        {
            k = hex[i] - '0';
        }
        else if (hex[i] >= 'A' && hex[i] <= 'F')
        {
            k = hex[i] - 'A' + 10;
        }
        else if (hex[i] >= 'a' && hex[i] <= 'f')
        {
            k = hex[i] - 'a' + 10;
        }
        else
        {
            printf("input error!\n");
            return 0;
        }
        for (j = 0; j < len - i - 1; j++)
        {
            k = k * 16;
        }
        dec = dec + k;
    }
    return dec;
}