/*
一个数如果恰好等于它的因子之和，这个数就是完数。求1000之内的所有完数并输出其因子。

输出示例：
6,Its factors are 1,2,3
xxx,Its factors are xxx,xxx

*/
#include<stdio.h>
//#include<stdlib.h>

void CompleteNum(int);
int main(void){

    int i;
    for(i=1;i<=1000;i++){
        CompleteNum(i);
    }

  //  system("PAUSE");
    return 0;
}

void CompleteNum(int num){
    
    int i;
    int sum = 0;
    for(i=1;i<num;i++){
        if(num%i == 0){
            sum += i;
        }
    }
    if(sum==num){
        printf("%d,Its factors are 1",num);
            for(i=2;i<num;i++){
                if(num%i == 0){
                    printf(",%d",i);
                }
            }
        printf("\n");
    }

}