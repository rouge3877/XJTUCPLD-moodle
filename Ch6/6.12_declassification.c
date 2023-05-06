/*
有一行电文，按下面规律译成密码，
第1个字母变成第26个字母，第i个字母变成第（26-i+1）个字母，
非字母字符不变，编程序将密码译回原文，并输出密码和原文。
示例：
密码为
原文为
*/

#include <stdio.h>
#include <string.h>
// #include<stdlib.h>
#define LENGTH 100

char *declassification(char *ciphertext);
int main(void)
{

    // char ciphertext[LENGTH];//???????
    char ciphertext[LENGTH] = {'\0'};
    int i;

    for (i = 0; i < LENGTH; i++)
    {
        scanf("%c", &ciphertext[i]);
        if (ciphertext[i] == '\n')
            break;
    }
    ciphertext[i] = '\0';

    char *plaintext = declassification(ciphertext);

    printf("密码为%s\n", ciphertext);
    printf("原文为%s", plaintext);
    // system("PAUSE");
    return 0;
}

char * declassification(char *ciphertext)
{

    int i;
    char static plaintext[LENGTH];
    for (i = 0; i < LENGTH; i++)
        plaintext[i] = 0;

    for (i = 0; i < strlen(ciphertext); i++)
    {
        if (ciphertext[i] >= 'a' && ciphertext[i] <= 'z')
        {
            plaintext[i] = 'z' - ciphertext[i] + 'a';
        }
        else if (ciphertext[i] >= 'A' && ciphertext[i] <= 'Z')
        {
            plaintext[i] = 'Z' - ciphertext[i] + 'A';
        }
        else
        {
            plaintext[i] = ciphertext[i];
        }
    }

    return plaintext;
}
