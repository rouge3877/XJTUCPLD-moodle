/*有10个学生，每个学生的数据包括学号、姓名、3门课程的成绩，
从键盘输入10个学生数据，要求输出3门课程总平均成绩，以及最高分学生的数据（
包括学号、姓名、3门课程成绩、平均分数，保留小数点后两位）。

以5个学生为例，例如：
输入：1 Zhangsan 89 67 78 2 Lisi 69 78 77 3 Liufei 98 96 95 4 Liming 87 96 85 5 Hanxue 90 87 93
输出：
总平均成绩为85.67
最高分学生为3,Liufei,98.00,96.00,95.00,96.33*/

#include <stdio.h>
#include <string.h>

#define MAX_STUDENT_NUM 10  // 最多10个学生
#define MAX_NAME_LEN 20     // 姓名最多20个字符

struct student {
    int id;
    char name[MAX_NAME_LEN];
    float score[3];
    float average;
};

void input_student_data(struct student stu[], int num);
void calculate_average(struct student stu[], int num);
void find_max_student(struct student stu[], int num, struct student *max_stu);
void output_result(struct student stu[], int num, float avg_score, struct student *max_stu);

int main() {
    struct student stu[MAX_STUDENT_NUM];
    struct student max_stu;
    float avg_score;

    input_student_data(stu, MAX_STUDENT_NUM);     // 输入学生数据
    calculate_average(stu, MAX_STUDENT_NUM);       // 计算平均成绩
    find_max_student(stu, MAX_STUDENT_NUM, &max_stu);  // 找出最高分学生
    avg_score = (stu[0].average + stu[1].average + stu[2].average + stu[3].average + stu[4].average +
                 stu[5].average + stu[6].average + stu[7].average + stu[8].average + stu[9].average) / MAX_STUDENT_NUM;
    output_result(stu, MAX_STUDENT_NUM, avg_score, &max_stu);  // 输出结果

    return 0;
}

void input_student_data(struct student stu[], int num) {
    int i;
    for (i = 0; i < num; i++) {
        scanf("%d %s %f %f %f", &stu[i].id, stu[i].name, &stu[i].score[0], &stu[i].score[1], &stu[i].score[2]);
    }
}

void calculate_average(struct student stu[], int num) {
    int i;
    for (i = 0; i < num; i++) {
        stu[i].average = (stu[i].score[0] + stu[i].score[1] + stu[i].score[2]) / 3;
    }
}

void find_max_student(struct student stu[], int num, struct student *max_stu) {
    int i, max_index;
    float max_score = 0;
    for (i = 0; i < num; i++) {
        if (stu[i].average > max_score) {
            max_score = stu[i].average;
            max_index = i;
        }
    }
    *max_stu = stu[max_index];
}

void output_result(struct student stu[], int num, float avg_score, struct student *max_stu) {
    int i;
    printf("总平均成绩为%.2f\n", avg_score);
    printf("最高分学生为%d,%s,%.2f,%.2f,%.2f,%.2f\n",
           max_stu->id, max_stu->name, max_stu->score[0], max_stu->score[1], max_stu->score[2], max_stu->average);
}
