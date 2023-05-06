/*
存款利息的计算。有1000元，想存5年，可按以下5种办法存：
（1）一次存5年期。
（2）先存2年期，到期后将本息再存3年期。
（3）先存3年期，到期后将本息再存2年期。
（4）存1年期，到期后将本息再存1年期，连续存5次。
（5）存活期存款。活期利息每一季度结算一次。
2017年的银行存款利息如下：
1年期定期存款利息为1.5%；
2年期定期存款利息为2.1%；
3年期定期存款利息为2.75%；
5年期定期存款利息为3%；
活期存款利息为0.35%（活期存款每一季度结算一次利息）。

输出示例：
p1=1150.000000
p2=1127.965000
p3=1127.965000
p4=1077.284004
p5=1017.646235
*/
#include<stdio.h>
#define MONEY 1000
#define INTEREST_1YEAR 1.5
#define INTEREST_2YEAR 2.1
#define INTEREST_3YEAR 2.75
#define INTEREST_5YEAR 3
#define INTEREST_NYEAR 0.35

double power(double base,int index);

int main(void){
	double p1,p2,p3,p4,p5;
	
	p1=MONEY*(1+INTEREST_5YEAR*0.01*5);
	p2=MONEY*(1+INTEREST_2YEAR*0.01*2)*(1+INTEREST_3YEAR*0.01*3);
	p3=MONEY*(1+INTEREST_3YEAR*0.01*3)*(1+INTEREST_2YEAR*0.01*2);
	p4=MONEY*power(1+INTEREST_1YEAR*0.01,5);
	p5=MONEY*power((1+INTEREST_NYEAR*0.01*0.25),20);
	
	printf("p1=%.6lf\np2=%.6lf\np3=%.6lf\np4=%.6lf\np5=%.6lf",p1,p2,p3,p4,p5);
	return 0;
}

double power(double base,int index){
	double sum = 1;
	int i;
	for(i = 0; i < index; i++){
		sum = sum * base;
	}
	return sum;
}
