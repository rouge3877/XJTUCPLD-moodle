/*
输出杨辉三角
（要求输出10行）。
示例：
1
1 1
1 2 1
1 3 3 1
...
*/
#include <stdio.h>

int main(void)
{

	int YhTri[10][10] = {0};

	int i, j;
	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (j == 0 || j == i)
			{
				YhTri[i][j] = 1;
			}
			else
			{
				YhTri[i][j] = YhTri[i - 1][j - 1] + YhTri[i - 1][j];
			}
		}
	}

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j <= i; j++)
		{
			printf("%d ", YhTri[i][j]);
		}
		printf("\n");
	}

	return 0;
}