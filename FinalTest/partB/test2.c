#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void countNum(char* ,int*);
void printAns(int *);
int main(void){
	
	char getstring[80+3] = {0};
	int count[10] = {0};
	gets(getstring);
	
	//count number
	countNum(getstring,count);
		
	//output	
	printAns(count);
	
	return 0;
}

void countNum(char * get, int * count){
	int i;

	for(i=0;i<strlen(get);i++){
		if(*(get+i)>='0'&&*(get+i)<='9'){
			(*(count+(*(get+i)-'0')%10))++;
		}
	}
}
void printAns(int * count){
	int i;
	int total=0;
	for(i=0;i<10;i++){
		total += *(count+i);
		if(*(count+i) != 0) printf("%d->%d,",i,*(count+i));
	}
	printf("TOTAL->%d",total);	
}
