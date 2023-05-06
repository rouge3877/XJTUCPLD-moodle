/*
输入一个长度不超过10的字符串，将其按字符顺序排序。

先输出“input string:”
用户换行输入badhiopqlr后换行输出
“string sorted:
abdhilopqr”
如果用户换行输入eyiwoqssosq则换行输出“string too long,input again!input string:”
之后用户换行输入badhiopqlr后换行输出
“string sorted:
abdhilopqr”
*/

#include<stdio.h>
#include<string.h>

#define LENGTH 100

void sort(char* ,int);
int main(void){

    char str[LENGTH];
    printf("input string:");


    while(1){
        gets(str);
        if(strlen(str)>10){
            printf("\nstring too long,input again!input string:");
            continue;
        }else{
            break; 
        }
    }


    sort(str,strlen(str));
    printf("\nstring sorted:\n%s",str);

    return 0;
}
void sort(char* array,int n){
    int i,j,temp;
    for(i=0;i<n-1;i++){
        for(j=0;j<n-1-i;j++){
            if(array[j]>array[j+1]){
                temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }
    }
}
