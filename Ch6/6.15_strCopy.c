/*
编写一个程序，将字符数组s2中的全部字符复制到字符数组s1中。
不用strcpy函数。复制时，’\0’也要复制进去。’\0’后面的字符不复制。

格式要求：
先输出“input s2:”
用户在其后输入yiuh后输出“s1:yiuh”
*/

#include<stdio.h>
#include<string.h>
//#include<stdlib.h>
#define LENGTH 100

int main(void){

    char str1[LENGTH];
    char str2[LENGTH];
    int i;
    
    printf("input s2:");
    gets(str2);

    for(i=0;i<strlen(str2)+1;i++){
        str1[i] = str2[i];
    }

    printf("s1:");
    puts(str1);

    //system("PAUSE");
    return 0;
}