/*输入两个正整数m和n,求其最大公约数和最小公倍数。
输入5,8时，输出示例：
请输入两个正整数n,m:它们的最大公约数为:1
它们的最小公倍数为:40
*/
#include<stdio.h>
//#include<stdlib.h>
int main(void){

    int m,n;
    int temp;
    printf("请输入两个正整数n,m:");
    scanf("%d,%d",&m,&n);
    int x = m*n;

    while(m * n != 0){
        temp = m % n;
        m = n;
        n = temp;
    }

    printf("它们的最大公约数为:%d\n",m);
    printf("它们的最小公倍数为:%d",(x / m));

//	system("PAUSE");
    return 0;
}