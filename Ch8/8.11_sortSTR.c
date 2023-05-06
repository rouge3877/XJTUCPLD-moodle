#include <stdio.h>
#include <string.h>

#define MAX_LEN 100

void bubbleSort(char arr[][MAX_LEN], int n);

int main() {
    char str[10][MAX_LEN];
    int i;

    // 输入10个字符串
    //printf("用户输入:\n");
    for (i = 0; i < 10; i++) {
        gets(str[i]);
        str[i][strcspn(str[i], "\n")] = '\0';  // 去掉换行符
    }

    // 对字符串进行排序
    bubbleSort(str, 10);

    // 输出排序后的字符串
    for (i = 0; i < 10; i++) {
        printf("%s\n", str[i]);
    }

    return 0;
}

void bubbleSort(char arr[][MAX_LEN], int n) {
    int i, j;
    char temp[MAX_LEN];

    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (strcmp(arr[j], arr[j+1]) > 0) {
                strcpy(temp, arr[j]);
                strcpy(arr[j], arr[j+1]);
                strcpy(arr[j+1], temp);
            }
        }
    }
}
