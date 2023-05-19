#include<stdio.h>
#include<stdlib.h>

char judgeHave(int,int*,int);
int  subst(int * a, int m, int * b ,int n,int * c);
int main(void){
	
	//input
	int m,n,total;//m和n代表a和b的元素个数
	int *a = (int*)malloc(m*sizeof(int));
	int *b = (int*)malloc(n*sizeof(int));
	int c[200] = {0};
	int i,j;
	
	scanf("%d %d",&m,&n);
	
	
	for(i=0;i<m;i++){
		scanf("%d",a+i);
	}
	
	for(i=0;i<n;i++){
		scanf("%d",b+i);
	}
	
	total = subst(a,m,b,n,c);
	
	//output
	if(total==0) printf("None");
	else{
		for(i=0;i<total;i++){
			printf("%d ",*(c+i));
			
		}
	} 
	return 0;	
}

int  subst(int * a, int m, int * b ,int n,int * c){
	
	int i;
	int total;
	int mid[200]={0};	
	for(i=0;i<200;i++){
		c[i] = -1;
		mid[i] = -1;
	}
	
	int index = 0;
	for(i=0;i<m;i++){
		if(judgeHave(a[i],b,n)=='F'){
			mid[index] = a[i];
			index++;
		}
	}
	
	
	int indexc = 0;
	int indexmid = 1;	
	if(index!=0){
		
		c[0] = mid[0];
		while(mid[indexmid]!=-1){
			
			if(judgeHave(mid[indexmid],c,indexc)=='F'){
				indexc++;
				c[indexc] = mid[indexmid];
				
			}			
			
			indexmid++;
		}
	}else index = 0;
	
	
	return indexc+1;
	
}

char judgeHave(int key,int* str,int len){
	char ret = 'F';
	int i;
	for(i=0;i<len;i++){
		if(str[i] == key) ret = 'T';
	}
	
	return ret;	
}
