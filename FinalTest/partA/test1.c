#include<stdio.h>
#define LENGTH 100
void Revarse(int*,int);

int main(void){

    int m,n;
    scanf("%d",&m);
    scanf("%d",&n);

    int i,j;
    int num = 0;

    int arr[LENGTH][LENGTH];
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            arr[i][j] = -1;
        }
    }

/*
    for(i=0;i<LENGTH;i++){
        for(j=0;j<LENGTH;j++){
            if(arr[i][j] != -1){
                arr[i][j] = -2;
            }
        }
    }
*/

    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
            if(num<m){
                arr[i][j] = num;
                num+=1;
            }
        }
    }

    for(i=0;i<n;i++){
        if(i%2 == 1){
            Revarse(*(arr+i),n);
        }
    }

    //下面把矩阵转置输出即可





}

void Revarse(int * arr, int len){
    int i;
    char temp;
    if(len%2==0){
        for(i=0;i<len/2;i++){
            temp = arr[len-1-i];
            arr[len-1-i] = arr[i];
            arr[i] = temp;
        }
    }else{
        for(i=0;i<(len-1)/2;i++){
            temp = arr[len-1-i];
            arr[len-1-i] = arr[i];
            arr[i] = temp;        
        }
    }
}
