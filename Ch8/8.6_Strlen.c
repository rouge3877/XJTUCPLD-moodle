#include<stdio.h>   

int stringlen(char*);
int main(void){

    printf("input string:");
    char str[100];
    gets(str);
    int len = stringlen(str);
    printf("\nThe length of string is %d.", len);

    return 0;
}
int stringlen(char * str){
    int count = 0;
    while(*str != '\0'){
        count++;
        str++;
    }
    return count;
}