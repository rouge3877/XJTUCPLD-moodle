/*
给定圆半径，圆柱高，求圆周长、圆面积、圆球表面积、圆球体积、圆柱体积。
请按示例说明编程序，取小数点后两位数字
当输入1.5,3时，输出示例：
请输入圆半径r，圆柱高h：
圆周长为:9.42
圆面积为:7.07
圆球表面积为:28.27
圆球体积为:14.14
圆柱体积为:21.21
*/ 
#include<stdio.h>
#define PI 3.1415

int main(void){
	
	double r,h;
	printf("请输入圆半径r，圆柱高h：");
	scanf("%lf %lf",&r,&h);
	
	double Circumference, 
		   Circular_area, 
		   Sphere_area, 
		   Spherical_volume, 
		   Cylinder_volume;
		   
	Circumference = 2*r*PI;
	Circular_area = r*r*PI;
	Sphere_area = 4*r*r*PI;
	Spherical_volume = 4*r*r*r*PI*0.33333;
	Cylinder_volume = Circular_area * 3;
	
	printf("\n圆周长为:%.2lf\n圆面积为:%.2lf\n圆球表面积为:%.2lf\n圆球体积为:%.2lf\n圆柱体积为:%.2lf",
	Circumference, Circular_area, Sphere_area, Spherical_volume, Cylinder_volume);
	
	return 0;
} 
