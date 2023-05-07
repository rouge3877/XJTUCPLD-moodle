/*编写一个函数，打印一个学生的成绩数组，该数组中有5个学生的数据记录，
每个记录包括num,name,score，用主函数输入这些记录，用print函数输出这些记录。(最后一行的输出结尾不用换行)
输入：1 Zhangsan 90 90 90
输出：
num name score
1 Zhangsan 90 90 90
2 Lisi 80 80 80
3 Liufei 96 96 96*/

#include<stdio.h>

struct student
{
    int num;
    char name[20];
    int score[3];
};

int main(void){

    struct student stu[5];
    int i,j;
    for(i=0;i<5;i++){
        scanf("%d %s %d %d %d",&stu[i].num,stu[i].name,&stu[i].score[0],&stu[i].score[1],&stu[i].score[2]);
    }
    printf("num name score\n");
    for(i=0;i<5;i++){
        printf("%d %s %d %d %d\n",stu[i].num,stu[i].name,stu[i].score[0],stu[i].score[1],stu[i].score[2]);
    }
    return 0;
}