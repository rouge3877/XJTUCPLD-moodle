/*
有一篇文章，共有2行文字，每行10个字符。要求分别统计出其中英文大写字母、小写字母、数字、空格以及其他字符的个数。
输出示例：
大写字母个数X
小写字母个数X
数字个数X
空格个数X
其他字符个数X
*/

#include<stdio.h>
#include<string.h>
//#include<stdlib.h>
int main(void){

    int i,j;
    char line1[12];
    char line2[12];
    int count[5]={0,0,0,0,0};
    line1[11]=line2[11]='\0';

    for(i=0;i<11;i++){
        line1[i]=getchar();
    }
    for(i=0;i<11;i++){
        line2[i]=getchar();
    }

    for(i=0;i<10;i++){
        if('A'<=line1[i] && 'Z'>=line1[i])
            count[0]++;
        else if('a'<=line1[i] && 'z'>=line1[i])
            count[1]++;
        else if('0'<=line1[i] && '9'>=line1[i])
            count[2]++;
        else if(line1[i]==' ')
            count[3]++;
        else
            count[4]++;
    }

    for(i=0;i<10;i++){
        if('A'<=line2[i] && 'Z'>=line2[i])
            count[0]++;
        else if('a'<=line2[i] && 'b'>=line2[i])
            count[1]++;
        else if('0'<=line2[i] && '9'>=line2[i])
            count[2]++;
        else if(line2[i]==' ')
            count[3]++;
        else
            count[4]++;
    }

    printf("大写字母个数%d\n小写字母个数%d\n数字个数%d\n空格个数%d\n其他字符个数%d",count[0],count[1],count[2],count[3],count[4]);

    //system("PAUSE");
    return 0;
}