#include<stdio.h>
#include<string.h>
//#include<stdlib.h>

struct stu{ 
    char name[20];  //姓名
    int id;  //学号
    int score1;  //科1
    int score2;  //科2
    int score3;  //科3
    int score4;  //科4
    int score5;  //科5

};

int avgscore(int, int, int, int);
void print_59stu(struct stu *);
void print_85stu(struct stu *);

int main(void){
    struct stu stu_z3, stu_l4, stu_w5, stu_z6;
    
    scanf("%s %d %d %d %d %d %d", stu_z3.name, &stu_z3.id, 
    &stu_z3.score1, &stu_z3.score2, &stu_z3.score3, &stu_z3.score4, &stu_z3.score5);

    scanf("%s %d %d %d %d %d %d", stu_l4.name, &stu_l4.id,
    &stu_l4.score1, &stu_l4.score2, &stu_l4.score3, &stu_l4.score4, &stu_l4.score5);

    scanf("%s %d %d %d %d %d %d", stu_w5.name, &stu_w5.id,
    &stu_w5.score1, &stu_w5.score2, &stu_w5.score3, &stu_w5.score4, &stu_w5.score5);

    scanf("%s %d %d %d %d %d %d", stu_z6.name, &stu_z6.id,
    &stu_z6.score1, &stu_z6.score2, &stu_z6.score3, &stu_z6.score4, &stu_z6.score5);

    printf("%d\n", avgscore(stu_z3.score1, stu_l4.score1, stu_w5.score1, stu_z6.score1));
    
    print_59stu(&stu_z3);
    print_59stu(&stu_l4);
    print_59stu(&stu_w5);
    print_59stu(&stu_z6);

    print_85stu(&stu_z3);
    print_85stu(&stu_l4);
    print_85stu(&stu_w5);
    print_85stu(&stu_z6);
    
    //system("pause");
    return 0;
}

int avgscore(int a, int b, int c, int d){
    int avg;
    avg = (a + b + c + d) / 4;
    return avg;
}

void print_59stu(struct stu* stu){
    if((stu->score1<60) + (stu->score2<60) + (stu->score3<60) + (stu->score4<60) + (stu->score5<60)> 2){
        printf("%s %d %d %d %d %d %d %d \n", stu->name, stu->id, stu->score1, stu->score2, stu->score3,  stu->score4, stu->score5,
         (stu->score1+stu->score2+stu->score3+stu->score4 + stu->score5)/5);
    }
}

void print_85stu(struct stu* stu){
    if(((stu->score1>85) + (stu->score2>85) + (stu->score3>85) + (stu->score4>85) + (stu->score5>85) == 5)||((stu->score1 + stu->score2 + stu->score3 + stu->score4 + stu->score5) > 450)){
        printf("%s %d %d %d %d %d %d \n", stu->name, stu->id, stu->score1, stu->score2, stu->score3,  stu->score4, stu->score5);
    }
}
