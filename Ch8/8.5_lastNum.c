#include <stdio.h>
#define ROUND 3

int lastnum(int, int);
int main(void)
{

    printf("input number of person: n=");
    int n;
    scanf("%d", &n);

    int no = lastnum(n, ROUND);

    printf("\nThe last one is NO.%d", no);

    getchar();
    getchar();
    return 0;
}

int lastnum(int total, int round)
{
    int i;
    int num[100];
    for (i = 0; i < total; i++)
    {
        num[i] = 1;
    }

    int count = 1;
    while (1)
    {
        for (i = 0; i < total; i++)
        {
            if (num[i] == 1)
            {
                count++;
                if (count == round)
                {
                    num[i] = 0;
                    count = 0;
                }
            }
        }
        int left = 0;
        for (i = 0; i < total; i++)
        {
            left += num[i];
            if (left == 1)
            {
                break;
            }
        }
        if (left == 1)
        {
            break;
        }
    }

    int index;

    for (i = 0; i < total; i++)
    {
        if (num[i] == 1)
            index = i + 1;
    }
    return index;
}