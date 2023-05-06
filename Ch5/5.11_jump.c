#include <stdio.h>
//#include<stdlib.h>
int main(void) {
    int i;
    double S = 0; // 总路程
    double H = 100.0; // 落地高度
    for (i = 1; i < 10; i++) {
        S += H; // 累加下落和弹起的路程
        H = H / 2; // 更新落地高度
        S += H;
    }
    S += H; // 累加最后一次下落和弹起的路程
    double h=H/2;
    printf("第10次落地时共经过%.6lf米\n", S);
    printf("第10次反弹%.6lf米\n", h);
    //system("PAUSE");
    return 0;
}
