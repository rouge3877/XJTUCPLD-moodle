#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int a[50];
    int len = 0, num = 0, i, j;

    gets(str);

    for (i = 0; i < strlen(str); i++)
    {
        if (str[i] >= '0' && str[i] <= '9')
        {                                  // 如果是数字字符
            num = num * 10 + str[i] - '0'; // 将连续的数字字符组成一个整数
        }
        else
        {
            if (num > 0)
            { // 如果前面有数字，将其存入数组a中
                a[len++] = num;
                num = 0;
            }
        }
    }

    if (num > 0)
    { // 如果最后一个字符是数字，将其存入数组a中
        a[len++] = num;
    }

    printf("%d ", len); // 输出整数的个数

    for (j = 0; j < len; j++)
    { // 输出数组a中的每个元素
        printf("%d ", a[j]);
    }

    return 0;
}