#include<stdio.h>
#include<string.h>
#include<stdlib.h>

char* zipZip(char*);
char judgeHave(char,char*);
int main(void){
	
	char getstring[50+3] = {0};
	gets(getstring);
	
	//count number
	char * afterzip = zipZip(getstring);
	
	//output	
	puts(afterzip);
	free(afterzip);	
	return 0;
}

char* zipZip(char* str){
	int i,j;
	char* afterzip = (char*)malloc(50*sizeof(char));
	for(i=0;i<50;i++) *(afterzip+i)=0;
	char midzip[53] = {0};//no other char
	int index=0;
	
	for(i=0;i<strlen(str);i++){
		if ((('z'>=*(str+i))&&('a'<=*(str+i)))||(('Z'>=*(str+i))&&('A'<=*(str+i)))){
			midzip[index] = *(str+i);	
			index++;		
		}
	}
	
	afterzip[0] = midzip[0];
	index = 0;
	for(i=1;i<strlen(midzip);i++){
		if(judgeHave(*(midzip+i),afterzip)!='T'){
			*(afterzip+index+1) = *(midzip+i);
			index++;
		}
	}
	return afterzip;
}

char judgeHave(char key,char* str){
	char ret = 'F';
	int i;
	for(i=0;i<strlen(str);i++){
		if(key==(*(str+i))){
			if(ret == 'M') ret = 'T';
			else ret = 'M';
		}
	}
	return ret;	
}
