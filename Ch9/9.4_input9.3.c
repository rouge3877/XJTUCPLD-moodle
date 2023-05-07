#include<stdio.h>
#include<stdlib.h> // for dynamic memory allocation

struct student
{
    int num;
    char name[20];
    int score[3];
};

struct student* input(void);
int main(void){

    struct student* getss = input();

    int i;
    printf("num name score\n");
    for(i=0;i<5;i++){
        printf("%d %s %d %d %d\n",(getss+i)->num,(getss+i)->name,(getss+i)->score[0],(getss+i)->score[1],(getss+i)->score[2]);
    }

    // free dynamically allocated memory
    free(getss);

    return 0;
}

struct student* input(void){

    struct student* stu = malloc(5 * sizeof(struct student)); // allocate memory for 5 students

    int i;
    for(i=0;i<5;i++){
        if (scanf("%d %s %d %d %d",&stu[i].num,stu[i].name,&stu[i].score[0],&stu[i].score[1],&stu[i].score[2]) != 5) {
            printf("Input error!\n");
            exit(1);
        }
    }

    return stu;
}
