/*
用递归方法求n阶勒让德多项式的值，递归公式为
当n=0时Pn(x)=1 当n=1时Pn(x)=x
当n≥1时Pn(x)=((2n-1)×x-p(n-1)(x)-(n-1)×P(n-2)(x))/n
其中p(n-1),P(n-2)是符号
格式要求：
先输出“input n & x:”
用户在其后输入1，2后输出“n=1,x=2
P1(2)=2.00”
注：Pn(x)共显示6位，保留小数点后两位
*/
#include<stdio.h>
//#include<stdlib.h>

double Legendre(int,int);
int main(void){

    int x,n;

    printf("input n & x:");
    scanf("%d,%d",&n,&x);
    printf("n=1,x=2\nP%d(%d)=%.2lf",n,x,Legendre(n,x));
    //system("PAUSE");
    return 0;
}
double Legendre(int n,int x){
    if(n==0){
        return 1;
    }else if(n==1){
        return x;
    }else{
        return (2*n-1)*x-Legendre(n-1,x)-(n-1)*Legendre(n-2,x)/n;
    }
}
