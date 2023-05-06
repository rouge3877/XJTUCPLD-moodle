/*
输入一行字符，分别统计出其中英文字母、空格、数字和其他字符的个数。
示例：
输入:hello 12
输出：
英文字母5
空格1
数字3   
其他字符1
注意：输入以换行符为结尾，换行符作为其他字符算入统计结果
(由于系统缘故,若使用getchar函数请将循环终止条件设为不等于EOF而非'\n')
*/
#include<stdio.h>
//#include<stdlib.h>

int main(void){

    char  chars;
    int count[4] = {0,0,0,1};

    while((chars = getchar()) != '\n'){
        if((chars >= 'a' && chars <='z')||(chars >= 'A' && chars <= 'Z'))
            count[0]++;
        else if(chars == ' ')
            count[1]++;
        else if(chars >= '0' && chars <= '9')
            count[2]++;
        else
            count[3]++;
    }

    printf("英文字母%d\n空格%d\n数字%d\n其他字符%d",count[0],count[1],count[2],count[3]);

//    system("PAUSE");
    return 0;
}