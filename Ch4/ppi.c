/*
给一个不多于5位的正整数，要求：
1.求出它是几位数；
2.分别输出每一位数字；
3.按逆序输出各位数字；
输入20，输出示例：
请输入一个整数(0-99999):位数:2
每位数字为:2,0
反序数字为:02
*/
#include<stdio.h>
#include<stdlib.h>

int digits(int);
int * eachNumber(int,int); 
int main(void){
	
	int num; 
	printf("请输入一个整数(0-99999):");
	scanf("%d",&num);
	
	int digit;
	int * eachnum;
	digit = digits(num);
	printf("位数:%d\n",digit);
	eachnum = eachNumber(num,digit);
	
	int i;
	printf("每位数字为:");
	for(i=0; i<digit; i++){
		printf("%d", eachnum[i]);
		if(i != digit-1){
			printf(",");
		}
	}
	
	printf("\n反序数字为:");
	for(i=digit-1; i>=0; i--){
		printf("%d", eachnum[i]);
	}
	
	free(eachnum);
	return 0;
} 

int digits(int num){
	if(num > 9999)
		return 5;
	else if(num > 999)
		return 4;
	else if(num > 99)
		return 3;		
	else if(num > 9)
		return 2;	
	else
		return 1;
}

int * eachNumber(int num,int digit){
    int * eachnum;
    eachnum = (int *) malloc(sizeof(int)*5); 
    
    int i;
	for(i = digit-1; i>=0; i=i-1){
		eachnum[i] = num % 10;
		num /= 10;
	}
	
    return eachnum;
}
