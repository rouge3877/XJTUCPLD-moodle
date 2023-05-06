#include<stdio.h>
#include<math.h>
int main()
{
	double d = 300000;
	double p = 6000;
	double r = 0.01;
	
	printf("m=%.2lf",(log(p) - log(p-d*r)) / log(1+r));
}
