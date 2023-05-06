/*
请编程序将“China”译成密码，
密码规律使是：用原来的字母后面第4个字母代替原来的字母。
例如，字母“A”后面第4个字母是“E”，用“E”代替“A”。
输出示例：
password is ... 
*/
#include<stdio.h>
#define PLAINTEXT "China"
#define LEN_PLAINTEXT 5
int main(void){
	
	char plaintext[LEN_PLAINTEXT] = PLAINTEXT;
	char ciphertext[LEN_PLAINTEXT];
	
	int i;
	for(i = 0; i < LEN_PLAINTEXT; i++){
		ciphertext[i] = plaintext[i] + 4;
	}
	
	printf("password is %s", ciphertext);
	return 0;
}
