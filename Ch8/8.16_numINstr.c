#include <stdio.h>
#include <string.h>

//#include <stdlib.h>

int count(const char *);
void Findnum(const char *,int,int);

int main(void)
{
    char str[100];
    gets(str);

    int num[100];

    int numtotal = count(str);
    printf("%d ", numtotal);
    Findnum(str, strlen(str), numtotal);

    //system("pause");
    return 0;
}

int count(const char *str)
{
    int num = 0;
    int i = 0;
    while (str[i+1] != '\0')
    {
        if ((str[i] >= '0' && str[i] <= '9') && ((str[i + 1] < '0' || str[i + 1] > '9') || (str[i + 1] == '\0')))
        {
            num++;
        }
        i++;
    }

    return num;
}

void Findnum(const char *str, int len, int num)
{
    static numlist[100] = {0};

    int i;
    int left[100]={0};
    int right[100]={0};
    int j=0;

    for(i=0;i<len;i++)
    {
        
        if ((str[i] >= '0' && str[i] <= '9') && ((str[i-1] < '0' || str[i-1] > '9')||i==0)){
            left[j] = i;
            j++;
        }

        
    }

    int k=0;

    for(i=0;i<len-1;i++)
    {
        
        if ((str[i] >= '0' && str[i] <= '9') && ((str[i + 1] < '0' || str[i + 1] > '9') || (str[i + 1] == '\0')))
        {
           right[k] = i;
           k++;
        }
    }

    for(i=0;i<num;i++)
    {
        int num;
        for(j=left[i];j<=right[i];j++)
        {
            num = num + (str[j]-'0')*10^(right[i]-j);
        }
        numlist[i] = num;

    }

    for(i=0;i<num;i++)
    {
        printf("%d ",numlist[i]);
    }
}