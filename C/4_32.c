#include <stdio.h>

int main()
{
    int n;
    printf("Enter an odd number between 1 and 19: ");
    scanf("%d", &n);

    // 檢查輸入是否為奇數以及是否在 1 到 19 之間
    if (n < 1 || n > 19 || n % 2 == 0)
    {
        printf("不合規定\n");
        return 1; // 非法輸入則結束程式
    }

    int rows = (n + 1) / 2; // 計算需要多少行來打印上半部分（包括中間行）

    // 印上半部分（包括中間行）
    for (int i = 1; i <= rows; i++)
    {
        for (int j = 0; j < rows - i; j++) // 空白
            printf(" ");
        for (int k = 0; k < 2 * i - 1; k++) // 星星
            printf("*");
        printf("\n");
    }

    // 打印下半部分
    for (int i = rows - 1; i >= 1; i--) // 由大到小
    {
        for (int j = 0; j < rows - i; j++) // 空白 (少到多)
            printf(" ");
        for (int k = 0; k < 2 * i - 1; k++) // 星星 (多到少)
            printf("*");
        printf("\n");
    }

    return 0;
}
