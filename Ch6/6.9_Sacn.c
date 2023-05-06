/*
有15个数按由小到大顺序存放在一个数组中，输入一个数，
要求用折半查找法找出该数是数组中第几个元素的值。
输入：1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 3
（前15个数字为数组，最后一个为要找的数）
输出：
3
*/

#include<stdio.h>
//#include<stdlib.h>

int halfu(int a,int b);
int halfd(int a,int b);
int main(void){

    int arr[16];

    int i;
    for(i=0;i<16;i++){
        scanf("%d",&arr[i]);
    }

    int num = arr[15];

    int a=0;
    int b=14;
    int judge = 0;
    do{
        if(arr[(a+b)/2]==num){
            printf("%d",(a+b)/2+1);
            judge = 1;
        }else if(arr[(a+b)/2]<num){
            a = halfd(a,b);
        }else{
            b = halfu(a,b);
        }

    }while(judge == 0);





    //system("PAUSE");
    return 0;
}

int halfu(int a,int b){

    if((a+b)%2==0){
        return (a+b)/2;
    }else
        return (a+b+1)/2;
}
int halfd(int a,int b){

    if((a+b)%2==0){
        return (a+b)/2;
    }else
        return (a+b-1)/2;
}