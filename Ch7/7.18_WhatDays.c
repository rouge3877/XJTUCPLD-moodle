/*
给出年、月、日，计算该日是该年的第几天。

格式要求：
先输出“input date(year,month,day):”
用户在其后输入2008,8,8后输出“2008/8/8 is the 221th day in this year.”
*/
#include <stdio.h>

int main() {
    int year, month, day;
    int totalDays = 0;
    
    printf("input date(year,month,day):");
    scanf("%d,%d,%d", &year, &month, &day);
    int i;
    // 计算当月之前的天数
    for (i = 1; i < month; i++) {
        if (i == 2) { // 二月份特判闰年
            if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0) {
                totalDays += 29;
            } else {
                totalDays += 28;
            }
        } else if (i == 4 || i == 6 || i == 9 || i == 11) {
            totalDays += 30;
        } else {
            totalDays += 31;
        }
    }
    
    // 加上当月的天数
    totalDays += day;
    
    // 判断是否为闰年并计算总天数
    if (month > 2 && (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)) {
        totalDays += 1;
    }
    
    // 输出结果
    printf("%d/%d/%d is the %dth day in this year.", year, month, day, totalDays-1);
    
    return 0;
}
