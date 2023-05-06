/*
给出一百分制成绩，要求输出成绩等级'A'、'B'、'C'、'D'、'E'。
90分以上为A，80~89分为B，70~79分为C，60~69分为D，60分以下为E。
输入是1.0时（请注意保留一位小数），输出示例：
请输入学生成绩:成绩是1.0,相应的等级是E
*/ 
#include<stdio.h>
int main(void){
	
	float score;
	printf("请输入学生成绩:");
	scanf("%f",&score);
	
	if (score >= 90)
		printf("成绩是%.1f,相应的等级是A",score);
	else if (score >= 80 && score <90)
		printf("成绩是%.1f,相应的等级是B",score);
	else if (score >= 70 && score <80)
		printf("成绩是%.1f,相应的等级是C",score);
	else if (score >= 60 && score <70)
		printf("成绩是%.1f,相应的等级是D",score);
	else
		printf("成绩是%.1f,相应的等级是E",score);
		
	return 0;
}
