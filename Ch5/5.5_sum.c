#include <stdio.h>
#include<math.h>

int main() {
    int a, n;
    scanf("%d,%d", &a, &n);

    int sum = 0;
    int i;
    for(i=0;i<n;i++){
        sum = sum + (n-i)*(pow(10,i));
    }
    sum = a * sum;
    printf("S=%d\n", sum);

    return 0;
}