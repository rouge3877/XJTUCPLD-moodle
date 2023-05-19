#include<stdio.h>
#include<stdlib.h>
int * createL(int,int);
void Reverse(int *,int);
int main(void){
	
	//input
	int m,n;
	scanf("%d",&m);//输入正整数n
	scanf("%d",&n);//方阵的阶次	
	
	//create n lists(len=n) and * = -1
	int i;
	int** cowList = (int **)malloc(n*sizeof(int*));
	for(i=0;i<n;i++){
		*(cowList+i) = createL(m,n);
	}
	
	//reverse i%2==0
	for(i=0;i<n;i+=2){
		Reverse(*(cowList+i),n);
	}
	
	//Transpose output 
	int j;
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(  *(*(cowList+j)+i) != -1 ) printf("%d ",*(*(cowList+j)+i));
			else printf("* ");
		}
		if(i!=n-1) printf("\n");
	}
	
	for(i=0;i<n;i++){
		free(*(cowList+i));
	}
	
	return 0;
}

int * createL(int m,int n){
	static int num = 0;
	int* cow=(int*)malloc(n*sizeof(int));
	int i=0;

	for(i=0;i<n;i++){
		if(num<m){
			cow[i] = num;
			num++;
		}else cow[i] = -1;
	}
	return cow;	
}
void Reverse(int *cow,int n){
	int i;
	int temp;
	for(i=0;i<n/2;i++){
		temp = cow[i];
		cow[i] = cow[n-1-i];
		cow[n-1-i] = temp;
	}	
}
