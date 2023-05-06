#include <stdio.h>

int inter(int *a, int m, int *b, int n, int *c) {
    int i, j, k = 0;
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            if (a[i] == b[j]) {
                int l;
                for (l = 0; l < k; l++) {
                    if (c[l] == a[i]) {
                        break;
                    }
                }
                if (l == k) {
                    c[k] = a[i];
                    k++;
                }
            }
        }
    }
    return k;
}
/*该代码中，inter函数使用了三重循环来寻找数组a和数组b的交集，并将结果存储到数组c中。
其中，最内层循环用来遍历数组c，以判断是否已经存在相同的元素。如果不存在，则将该元素添加到数组c中。

在主函数中，首先读入数组a和数组b的长度，然后分别读入它们的元素值。
接下来，调用inter函数计算交集，并返回交集中元素的个数。
如果交集为空，则输出"None"；否则，依次输出数组c中的元素。

注意，该代码中假设数组a、b和c的长度均不超过80，因此没有进行数组越界检查。
在实际开发中，需要根据实际情况对数组长度进行检查和限制。*/
int main() {
    int m, n, i;
    scanf("%d %d", &m, &n);
    int a[80], b[80], c[80];
    for (i = 0; i < m; i++) {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < n; i++) {
        scanf("%d", &b[i]);
    }
    int len = inter(a, m, b, n, c);
    if (len == 0) {
        printf("None\n");
    } else {
        for (i = 0; i < len; i++) {
            printf("%d ", c[i]);
        }
    }
    return 0;
}
