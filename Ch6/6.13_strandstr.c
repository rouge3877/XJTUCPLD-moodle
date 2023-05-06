/*
编一程序，将两个字符串连接起来，不要用strcat函数

格式要求：
先输出“input string1:”
用户在其后输入yui后输出“input string2:”
用户在其后输入dh后隔行输出“The new string is:yuidh”
*/

#include<stdio.h>
#include<string.h>
//#include<stdlib.h>
#define LENGTH 100

int main(void){

    char str1[LENGTH];
    char str2[LENGTH];
    int i;
    
    printf("input string1:");
    for(i=0;i<LENGTH;i++){
        scanf("%c",&str1[i]);
        if(str1[i] == '\n') 
            break;
    }
    //str1[i] = '\0';
    int temp = i;

    printf("input string2:");
    for(i=0;i<LENGTH;i++){
        scanf("%c",&str2[i]);
        if(str2[i] == '\n') 
            break;
    }
    str2[i] = '\0';
    str1[i+strlen(str2)] = '\0';

    printf("\nThe new string is:");

    for(i=temp;i<temp+strlen(str2);i++){
        str1[i]=str2[i-temp];
    }
    printf("%s",str1);
    
    //system("PAUSE");
    return 0;
}