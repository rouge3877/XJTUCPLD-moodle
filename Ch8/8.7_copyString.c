#include<stdio.h>
#include<string.h>

int main(void){

    char str1[100];
    char str2[100];
    printf("input string:");
    gets(str1);
    int n;
    printf("\nwhich character that begin to copy?\n");
    scanf("%d", &n);

    int i;
    if(strlen(str1)<n) printf("input error!");
    else{
        for(i=0; i<100; i++){
            str2[i] = str1[n+i-1];
            if(str1[n+i-1] == '\0'){
                break;
            }
        }
        puts(str2);
    }
    return 0;
}