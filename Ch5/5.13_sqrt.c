/*
用迭代法求x=根号a。
示例：
输入2，输出：
enter a positive number:The square root of 2.00 is 1.41421
*/
#include<stdio.h>
//#include<stdlib.h>
#define ERROR 1e-15

double sqrt(double);
double fabs(double);

int main(void){

    double input;
    printf("enter a positive number:");
    scanf("%lf",&input);
    double ans = sqrt(input);
    printf("The square root of %.2lf is %.5lf",input,ans);

    //system("PAUSE");
    return 0;
}

double fabs(double num){
    if(num > 0)
        return num;
    else
        num = 0-num;
        return num;
}

double sqrt(double num){

    double x0,x1;
    x0 = num;
    x1 = 0.5*(x0 + num/x0);

    while( fabs(x1-x0) > ERROR){
    //当x1与x2的距离大于允许的误差时
        x0 = x1;
        x1 = 0.5*(x0 + num/x0);
    }
    return x0;

}