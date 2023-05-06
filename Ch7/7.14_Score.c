#include <stdio.h>
#include <math.h>
#include <stdlib.h>

#define STUDENTS 10
#define COURSES 5

void calc_student_avg(float scores[][COURSES], float student_avgs[]);
void calc_course_avg(float scores[][COURSES], float course_avgs[]);
void find_highest_score(float scores[][COURSES], int *max_student, int *max_course);
float calc_avg_variance(float student_avgs[]);

int main(void)
{
    float scores[STUDENTS][COURSES];
    float student_avgs[STUDENTS];
    float course_avgs[COURSES];
    int i, j, max_student, max_course;
    printf("input score of student 1:");
    for (j = 0; j < COURSES; j++)
    {
        scanf("%f", &scores[0][j]);
    }
    for (i = 1; i < STUDENTS; i++)
    {
        printf("input score of student %d:", i + 1);
        for (j = 0; j < COURSES; j++)
        {
            scanf("%f", &scores[i][j]);
        }
    }

    calc_student_avg(scores, student_avgs);
    calc_course_avg(scores, course_avgs);
    find_highest_score(scores, &max_student, &max_course);
    float variance = calc_avg_variance(student_avgs);

    printf("\nNO.     cour1   cour2   cour3   cour4   cour5   aver\n");
    for (i = 0; i < STUDENTS; i++)
    {
        printf("\nNO %d", i + 1);
        for (j = 0; j < COURSES; j++)
        {
            printf("%8.2f", scores[i][j]);
        }
        printf("%8.2f\n", student_avgs[i]);
    }
    printf("\naverage:");
    for (j = 0; j < COURSES; j++)
    {
        printf("%8.2f", course_avgs[j]);
    }
    printf("\n");

    printf("highest:%8.2f NO.%2d course%2d\n", scores[max_student - 1][max_course - 1], max_student, max_course);

    printf("variance%8.2f", variance);

    //system("PAUSE");
    return 0;
}


// 计算每个学生的平均分
void calc_student_avg(float scores[][COURSES], float student_avgs[])
{
    int i, j;
    for (i = 0; i < STUDENTS; i++)
    {
        float sum = 0;
        for (j = 0; j < COURSES; j++)
        {
            sum += scores[i][j];
        }
        student_avgs[i] = sum / COURSES;
    }
}

// 计算每门课的平均分
void calc_course_avg(float scores[][COURSES], float course_avgs[])
{
    int i, j;
    for (j = 0; j < COURSES; j++)
    {
        float sum = 0;
        for (i = 0; i < STUDENTS; i++)
        {
            sum += scores[i][j];
        }
        course_avgs[j] = sum / STUDENTS;
    }
}

// 找出所有50个分数中最高的分数所对应的学生和课程
void find_highest_score(float scores[][COURSES], int *max_student, int *max_course)
{
    int i, j;
    float max_score = 0;
    for (i = 0; i < STUDENTS; i++)
    {
        for (j = 0; j < COURSES; j++)
        {
            if (scores[i][j] > max_score)
            {
                max_score = scores[i][j];
                *max_student = i + 1;
                *max_course = j + 1;
            }
        }
    }
}

// 计算平均分方差
float calc_avg_variance(float student_avgs[])
{
    int i;
    float sum_squares = 0;
    float sum = 0;
    for (i = 0; i < STUDENTS; i++)
    {
        sum_squares += pow(student_avgs[i], 2);
        sum += student_avgs[i];
    }
    float avg = sum / STUDENTS;
    float variance = (sum_squares / STUDENTS) - pow(avg, 2);
    return variance;
}