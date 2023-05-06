#include<stdio.h>

int countUP(char*);
int countLOW(char*);
int countSPACE(char*);
int countNUM(char*);
int countOTHER(char*);

int main(void){


    printf("input string:  ");
    char str[100];
    gets(str);
    int up = countUP(str);
    int low = countLOW(str);
    int space = countSPACE(str);
    int num = countNUM(str);
    int other = countOTHER(str);

    printf("\nupper case:%d     ", up);
    printf("lower case:%d     ", low);
    printf("space:%d     ", space);
    printf("digit:%d     ", num);
    printf("other:%d     ", other-1);

    return 0;
}

int countUP(char* str){
    int i;
    int count = 0;
    for(i=0; i<100; i++){
        if(str[i] >= 'A' && str[i] <= 'Z'){
            count++;
        }
        if(str[i] == '\0'){
            break;
        }
    }
    return count;
}

int countLOW(char* str){
    int i;
    int count = 0;
    for(i=0; i<100; i++){
        if(str[i] >= 'a' && str[i] <= 'z'){
            count++;
        }
        if(str[i] == '\0'){
            break;
        }
    }
    return count;
}

int countSPACE(char* str){
    int i;
    int count = 0;
    for(i=0; i<100; i++){
        if(str[i] == ' '){
            count++;
        }
        if(str[i] == '\0'){
            break;
        }
    }
    return count;
}

int countNUM(char* str){
    int i;
    int count = 0;
    for(i=0; i<100; i++){
        if(str[i] >= '0' && str[i] <= '9'){
            count++;
        }
        if(str[i] == '\0'){
            break;
        }
    }
    return count;
}

int countOTHER(char* str){
    int i;
    int count = 0;
    for(i=0; i<100; i++){
        if(str[i] < '0' || str[i] > '9'){
            if(str[i] < 'A' || str[i] > 'Z'){
                if(str[i] < 'a' || str[i] > 'z'){
                    if(str[i] != ' '){
                        count++;
                    }
                }
            }
        }
        if(str[i] == '\0'){
            break;
        }
    }
    return count;
}