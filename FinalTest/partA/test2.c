#include <stdio.h>
#include <ctype.h> // 用到了 isalpha 函数

#define ALPHABET_COUNT 26 // 英文字母数

int main()
{
    int count[ALPHABET_COUNT] = {0}; // 存储每个字母出现的次数
    char c;

    while ((c = getchar()) != '\n')
    {
        if (isalpha(c)) // 如果是英文字母
        {
            c = toupper(c); // 统一转为大写字母
            count[c - 'A']++; // 对应字母出现次数加 1
        }
    }

    int total_count = 0; // 所有字母出现的总次数
    printf("A=%d", count[0]);
    total_count += count[0];
    int i;
    for (i = 1; i < ALPHABET_COUNT; i++)
    {
        if (count[i] != 0) // 如果这个字母出现过
        {
            printf(",%c=%d", 'A' + i, count[i]); // 输出字母及其出现次数
            total_count += count[i]; // 累加总次数
        }
    }
    printf(",TOTAL=%d\n", total_count); // 输出所有字母出现的总次数

    return 0;
}
