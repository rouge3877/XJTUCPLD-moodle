/*写一个函数，其功能是对一个字符串的内容进行压缩，压缩的规则是：
如果该字符是第一次出现的字母（区分大小写），则保留；
否则，则删去（标点符号、空格等非字母字符都删去，不符合保留条件的字母也删去）。
通过函数返回压缩结果。在主函数中输入一个不长于50的字符串，调用上述函数进行压缩，并输出结果。
样例
输入：I,am.a student
输出：Iamstuden

输入：To be or not to be
输出：Tobernt
*/

#include<stdio.h>
int Charlen(char* string);
void Zipzip(char*);
int main(void){
    
    char getss[] = "afsdfgds.sf";
    Zipzip(getss);
    printf("%s",getss);

    getchar();
    return 0;
}

void Zipzip(char* string){

    int i,j,k;
    int len = Charlen(string);
    //除去非字符
    for(i=0;i<len;i++){
        if((string[i] > 'Z' || string[i] < 'A')&&(string[i] > 'z' || string[i] < 'a')){
            
            for(j=i;j<Charlen(string)-1;j++){
                *(string+i)  = *(string+i+1);
            }

        }
    }
    //除去相同
    char rep[52]={0};
    for(i=0;i<Charlen(string);i++){

        
        rep[i] = string[i];



        for(j=i;j<Charlen(string)-1;j++){
            *(string+i)  = *(string+i+1);
        }


        
    }
    
}

int Charlen(char* string){
    int i;
    for(i=0;i<51;i++){
        if( string[i] == '\0' ){
            break;
        }
    }
    return i-1; 
}

int Judge(char key, char* comp, int lencomp){
    int i,j;
    for(i=0;i<lenarr)

}