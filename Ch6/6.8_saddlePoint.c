#include <stdio.h>

int main() {
    int matrix[3][3];
    int i, j, max, min, row, col, flag;

    // 输入3*3矩阵
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // 查找鞍点
    flag = 0;
    for (i = 0; i < 3; i++) {
        max = matrix[i][0];
        col = 0;
        for (j = 1; j < 3; j++) {
            if (matrix[i][j] > max) {
                max = matrix[i][j];
                col = j;
            }
        }
        min = matrix[0][col];
        row = 0;
        for (j = 1; j < 3; j++) {
            if (matrix[j][col] < min) {
                min = matrix[j][col];
                row = j;
            }
        }
        if (max == min) {
            printf("%d,%d,%d\n", row, col, max);
            flag = 1;
        }
    }

    if (!flag) {
        printf("not exist\n");
    }

    return 0;
}
