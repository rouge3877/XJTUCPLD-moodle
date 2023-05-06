/*
有4个圆塔，如课本图4.17所示，塔高10m。
输入一坐标，求该点的建筑高度（塔外为0）。
输入1.5,0时，输出：
请输入一个点(x,y):该点高度为0
*/
#include<stdio.h>
#include<math.h>
//#include<stdlib.h>

int main(void){
	
	printf("请输入一个点(x,y):");
	double x,y;
	scanf("(%lf,%lf)",&x,&y);

	x = fabs(x);
	y = fabs(y);

	if( ((x-2)*(x-2)+(y-2)*(y-2)) <= 1){
		printf("该点高度为10");
	}else{
		printf("该点高度为0");
	}
	

//	printf("\n");system("PAUSE");
	return 0;
}  
