/*
输入3个整数，按从小到大的顺序输出。

格式要求：
先输出“input three integer n1,n2,n3:”
用户在其后输入34,21,25后隔行输出“Now,the order is:21,25,34”
*/
#include<stdio.h>

void judge(int *, int *, int *);

int main(void){

    printf("input three integer n1,n2,n3:");

    int n1,n2,n3;
    int *pr1 = &n1;
    int *pr2 = &n2;
    int *pr3 = &n3;

    scanf("%d,%d,%d",pr1,pr2,pr3);
    judge(pr1, pr2, pr3);
    printf("\nNow,the order is:%d,%d,%d",n1,n2,n3);

    //getchar();getchar();
    

    return 0;
}

void judge(int *p1, int *p2, int *p3){

    int n1 = *p1;
    int n2 = *p2;
    int n3 = *p3;
    int temp;

    if(*p1 > *p2){
        temp = *p1;
        *p1 = *p2;
        *p2 = temp;
    }
    if(*p1 > *p3){
        temp = *p1;
        *p1 = *p3;
        *p3 = temp;
    }    
    if(*p2 > *p3){
        temp = *p2;
        *p2 = *p3;
        *p3 = temp;
    }         


}