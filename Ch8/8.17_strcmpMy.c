/*
写一函数，实现两个字符串比较。即自己写一个strcmp函数，函数原型为
int strcmp(char * p1,char * p2);
设p1指向字符串s1,设p2指向字符串s2。要求当s1=s2时，返回值为0；
若s1不等于s2，返回它们二者第一个不同字符的ASCII码差值（如"BOY"与"BAD"，第2个字母不同，O与A之差为79-65=14。）
如果s1>s2,则输出正值；如果s1
示例：
用户输入第一个字符串，换行后输入第二个字符串。系统返回数值。例如
用户输入：
asdfgh
asdfgh
系统输出：
0
*/
#include<stdio.h>
#include<string.h>

int strcmpMy(char * p1,char * p2);
int main(void){
    char str1[100];
    char str2[100];

    gets(str1);
    gets(str2);

    printf("%d",strcmpMy(str1,str2));

    return 0;
}

int strcmpMy(char * p1,char * p2){

    int i=0;
    while(p1[i]!='\0'&&p2[i]!='\0'){
        if(p1[i]!=p2[i]){
            return p1[i]-p2[i];
        }
        i++;
    }
    if(p1[i]=='\0'&&p2[i]=='\0'){
        return 0;
    }else if(p1[i]=='\0'){
        return -p2[i];
    }else{
        return p1[i];
    }


}