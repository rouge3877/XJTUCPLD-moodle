#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_CANDIDATE_NUM 5  // 应聘人员数目
#define MAX_NAME_LEN 11      // 姓名字符串长度（含结尾空字符）

// 应聘人员信息结构体定义
struct Candidate {
    char name[MAX_NAME_LEN];  // 姓名
    int age;                  // 年龄
    double score[5];          // 面试得分（长度为5）
    double total_score;       // 总分
};

// 输入函数
void input(struct Candidate *cand) {
    // 从键盘读入姓名和年龄
    int i;
    scanf("%s %d", cand->name, &cand->age);
    // 从键盘读入5个面试得分
    for (i = 0; i < 5; i++) {
        scanf("%lf", &cand->score[i]);
    }
    // 计算总分并保存
    cand->total_score = 0.0;
    for (i = 0; i < 5; i++) {
        cand->total_score += cand->score[i];
    }
}

// 输出函数
void output(struct Candidate *cand) {
    // 输出姓名、年龄和总分
    printf("%s %d %.2lf\n", cand->name, cand->age, cand->total_score);
}

// 比较函数（用于qsort排序）
int cmp(const void *a, const void *b) {
    struct Candidate *cand_a = (struct Candidate *)a;
    struct Candidate *cand_b = (struct Candidate *)b;
    if (cand_a->total_score < cand_b->total_score) {
        return 1;
    } else if (cand_a->total_score > cand_b->total_score) {
        return -1;
    } else {
        return 0;
    }
}

// 选举函数
void elect(struct Candidate *cand) {
    // 对所有应聘人员按总分从高到低排序
    qsort(cand, MAX_CANDIDATE_NUM, sizeof(struct Candidate), cmp);
    // 选出前2名并输出
    int i;
    for (i = 0; i < 2; i++) {
        printf("Number%d: ", i + 1);
        output(&cand[i]);
    }
}

int main() {
    // 定义应聘人员数组
    struct Candidate candidate[MAX_CANDIDATE_NUM];
    // 依次输入每位应聘人员的信息
    int i;
    for (i = 0; i < MAX_CANDIDATE_NUM; i++) {
        input(&candidate[i]);
    }
    // 进行选举并输出结果
    elect(candidate);
    return 0;
}
