#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define TOTALPERSON 5
#define TOTALSUB 5
#define LOWEST 2

struct CANDIDATE{
	char name[11];
	int age;
	float score[5];
	float sumscore;	
};
void input(struct CANDIDATE *candi);//输入一位应聘人员的信息（姓名和年龄）和面试得分，计算总分并保存
void output(struct CANDIDATE *candi);//用来输出一位应聘人员的信息（姓名和年龄）和面试总分（总分保留2位小数）
void select(struct CANDIDATE *candi);//用来选出总分最低的前2名（假设不存在总分相同的情况）
int main(void){
	
	struct CANDIDATE peopleList[TOTALPERSON];
	int i;
	for(i=0;i<TOTALPERSON;i++){
		input(peopleList+i);
	}
	
	select(peopleList);
	
	for(i=0;i<LOWEST;i++){
		printf("Number%d: ",i+1);
		output(peopleList+i);
	}
	return 0;
}

void input(struct CANDIDATE *candi){
	int sum = 0;
	scanf("%s %d",candi->name,&(candi->age));
	int i;for(i=0;i<TOTALSUB;i++){
		scanf("%f",&(candi->score[i]));
		sum += candi->score[i];
	}
	candi->sumscore = sum;
}
void output(struct CANDIDATE *candi){
	printf("%s %d %f\n",candi->name,candi->age,candi->sumscore);
}
void select(struct CANDIDATE *candi){
	int i,j;
	struct CANDIDATE temp;
	for(i=0;i<TOTALPERSON-1;i++){
		for(j=0;j<TOTALPERSON-1-i;j++){
			if((candi+j)->sumscore > (candi+j+1)->sumscore){
				temp = *(candi+j);
				*(candi+j) = *(candi+j+1);
				*(candi+j+1) = temp;
			}
		}
	}
}

