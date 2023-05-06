/*
写几个函数：
①输入10个职工的姓名和职工号；
②按职工号由小到大顺序排序，宗明顺序也随之调整；
③要求输入一个职工号，用折半查找法找出改职工的姓名，从主函数输入要查找的职工号，输出该职工姓名。

格式要求：
先输出“input NO. and name:”换行
用户输入3 Li后输出“input NO. and name:”
如此类推输入十次后点击回车后空一行换行输出“
result:
1 Zhang
2 Wang
3 Li
6 Zhao
7 Qian
8 Sun
12 Jiang
23 Shen
26 Han
27 Yang
input number to look for:”，换行
用户在其后输入3后换行输出“NO. 3 , his name is Li.
*/
#include <stdio.h>
#include <string.h>

#define MAX_NUM 10  // 定义职工数量上限
#define MAX_NAME_LEN 20  // 定义姓名字符串长度上限

typedef struct {  // 定义职工结构体类型
    char name[MAX_NAME_LEN];
    int num;
} Worker;

Worker workers[MAX_NUM];  // 定义职工数组
int worker_num = 0;  // 实际职工数量

void sort_workers(void);
char* search_worker(int num);
int main(void) {
    int i, search_num;
    char search_name[MAX_NAME_LEN];
    for (i = 0; i < MAX_NUM; i++) {
        printf("input NO. and name:\n");
        if (scanf("%d %s", &workers[i].num, workers[i].name) != 2) {
            break;
        }
        worker_num++;
    }
    getchar();  // 消耗多余的回车字符

    sort_workers();

    printf("\nresult:\n");
    for (i = 0; i < worker_num; i++) {
        printf("%d %s\n", workers[i].num, workers[i].name);
    }

    printf("input number to look for:\n");
    scanf("%d", &search_num);
    strcpy(search_name, search_worker(search_num));
    if (search_name != NULL) {
        printf("\nNO.%d , his name is %s.\n", search_num, search_name);
    } else {
        printf("not found.\n");
    }

    return 0;
}

// 按职工号从小到大排序
void sort_workers(void) {
    int i, j;
    Worker temp;
    for (i = 0; i < worker_num - 1; i++) {
        for (j = i + 1; j < worker_num; j++) {
            if (workers[i].num > workers[j].num) {
                temp = workers[i];
                workers[i] = workers[j];
                workers[j] = temp;
            }
        }
    }
}

// 折半查找职工姓名
char* search_worker(int num) {
    int left = 0, right = worker_num - 1, mid;
    while (left <= right) {
        mid = (left + right) / 2;
        if (workers[mid].num == num) {
            return workers[mid].name;
        } else if (workers[mid].num < num) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    return NULL;
}