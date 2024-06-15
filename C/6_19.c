#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define NUM_ROLLS 36000

int main()
{
    int sum_counts[13] = {0}; // 用於記錄每個點數和的出現次數（2-12）
    int die1, die2, sum;

    // 初始化隨機數生成器
    srand(time(0));

    // 投擲兩個骰子36000次
    for (int i = 0; i < NUM_ROLLS; i++)
    {
        die1 = rand() % 6 + 1; // 第一個骰子(0~5)+1，隨機數範圍1-6
        die2 = rand() % 6 + 1; // 第二個骰子
        sum = die1 + die2;
        sum_counts[sum]++;
    }

    // 列印出每個點數和的出現次數
    printf("點數和\t次數\n");
    for (int i = 2; i <= 12; i++)
    {
        printf("%d\t%d\n", i, sum_counts[i]);
    }

    return 0;
}
