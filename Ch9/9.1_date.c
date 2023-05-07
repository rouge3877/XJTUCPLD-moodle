/*定义一个结构体变量（包括年、月、日）。计算该日在本年中是第几天，注意闰年问题。
示例：
输入2018,10,10,输出：
10/10 is the 283th day in 2018.*/

#include <stdio.h>

struct Date {
    int year;
    int month;
    int day;
};

const int MONTH_DAYS[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
const int LEAP_MONTH_DAYS[12] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

int count_days(struct Date *p, int leap_year);
int is_leap_year(int year);

int main(void) {
    struct Date date;
    struct Date *ptr_date = &date;


    scanf("%d,%d,%d", &date.year, &date.month, &date.day);

    int days = count_days(ptr_date, is_leap_year(date.year));
    printf("%d/%d is the %dth day in %d.\n", date.month, date.day, days, date.year);

    return 0;
}

int count_days(struct Date *p, int leap_year) {
    int days = 0;

    int i;
    for (i = 1; i < p->month; i++) {
        days += leap_year ? LEAP_MONTH_DAYS[i-1] : MONTH_DAYS[i-1];
    }

    days += p->day;
    return days;
}

int is_leap_year(int year) {
    return (year % 4 == 0) && (year % 100 != 0 || year % 400 == 0);
}