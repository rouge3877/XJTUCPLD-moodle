#include<stdio.h>
//#include<stdlib.h>

int Narcissistic(int n);
int main(void){



    printf("parcissus numbers are");

    int i;
    for(i=100;i<1000;i++){
        if(Narcissistic(i)==1)
            printf(" %d",i);
    }

    //system("PAUSE");
    return 0;
}

int Narcissistic(int n){
    //水仙花数是指一个 3 位数，它的每个位上的数字的 3次幂之和等于它本身
    int dnum[3];
    int temp=n;
    dnum[2] = n/100;
    n = n % 100;
    dnum[1] = n/10;
    dnum[0] = n%10;

    if((dnum[2]*dnum[2]*dnum[2]+dnum[1]*dnum[1]*dnum[1]+dnum[0]*dnum[0]*dnum[0]) == temp)
        return 1;
    else
        return 0;
     
}
