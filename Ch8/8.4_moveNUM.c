#include <stdio.h>

void moveArr(int *, int, int);

int main(void)
{

    printf("how many numbers?");
    int n;
    scanf("%d", &n);
    printf("input %d numbers:", n);

    int num[n];
    int i;
    for (i = 0; i < n; i++)
    {
        scanf("%d", &num[i]);
    }

    printf("\nhow many place you want move?");
    int m;
    scanf("%d", &m);
    moveArr(num, n, m);
    printf("\nNow,they are:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d  ", num[i]);
    }
    //getchar();getchar();
    return 0;
}

void moveArr(int *arr, int len, int move)
{
    int i;
    int temp[len];
    for (i = 0; i < len; i++)
    {
        temp[i] = arr[i];
    }
    for (i = 0; i < len; i++)
    {
        arr[i] = arr[i + move];
    }
    for (i = 0; i < move; i++)
    {
        arr[len - move + i] = temp[i];
    }
}