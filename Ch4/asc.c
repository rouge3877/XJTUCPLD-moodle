/*
输入4个整数，要求按由小到大的顺序输出。
输入1,2,3,4时，输出：1,2,3,4
*/
#include<stdio.h>
//#include<stdlib.h>

void bubble_sort(int arr[], int len);
int main(void){
	
	int num[4];
	int temp;
	scanf("%d,%d,%d,%d",&num[0],&num[1],&num[2],&num[3]);

	bubble_sort(num,4);
	
	int i;
	for(i=0;i<3;i++){
		printf("%d,",num[i]);
	}
	printf("%d",num[3]);
	
	
//	system("PAUSE");
	return 0;
}

void bubble_sort(int arr[], int len) {
    int i, j, temp;
    for (i = 0; i < len - 1; i++)
        for (j = 0; j < len - 1 - i; j++)
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
}
