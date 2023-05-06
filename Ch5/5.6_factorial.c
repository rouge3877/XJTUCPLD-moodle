/*
求S=1!+2!+3!+...10!。
输出示例：
S=XXX
*/

#include<stdio.h>
//#include<stdlib.h>
int factorial(int n);
int main(void){
    int i;
    int sum=0;
    for(i=0;i<10;i++){
        sum += factorial(i+1);
    }
    printf("S=%d",sum);
//    system("PAUSE");
    return 0;
}
int factorial(int n){
    int i;
    int sum = 1;
    for(i = 0;i<n;i++){
        sum = sum * (i+1);
    }
    return sum;
}