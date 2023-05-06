#include <stdio.h>
#define LENGTH 10

void input(int *);
void execute(int *);
void output(int *);

int main(void) {
    int numArr[LENGTH];
    input(numArr);
    execute(numArr);
    output(numArr);
    //getchar(); getchar();
    return 0;
}

void input(int *numArr) {
    printf("input 10 numbers:");
    int i;
    for (i = 0; i < LENGTH; i++) {
        scanf("%d", numArr + i);
    }
}

void execute(int *numArr) {
    int i, min, max, minindex, maxindex, temp;
    min = max = numArr[0];
    minindex = maxindex = 0;
    for (i = 1; i < LENGTH; i++) {
        if (numArr[i] < min) {
            min = numArr[i];
            minindex = i;
        }
        if (numArr[i] > max) {
            max = numArr[i];
            maxindex = i;
        }
    }
    temp = numArr[0];
    numArr[0] = min;
    numArr[minindex] = temp;
    temp = numArr[LENGTH - 1];
    numArr[LENGTH - 1] = max;
    numArr[maxindex] = temp;
}

void output(int *numArr) {
    printf("Now,they are:");
    int i;
    for (i = 0; i < LENGTH; i++) {
        printf("%d ", *(numArr + i));
    }
}
