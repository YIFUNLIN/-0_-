#include <stdio.h>

int main()
{
    for (int i = 1; i <= 5; i++) // row
    {
        for (int j = 0; j <= 5 - i; j++) // 空白
            printf(" ");
        for (int k = 0; k < 2 * i - 1; k++)
            printf("*");
        printf("\n");
    }

    for (int i = 4; i >= 1; i--)
    {
        for (int j = 0; j <= 5 - i; j++)
            printf(" ");
        for (int k = 0; k < 2 * i - 1; k++)
            printf("*");
        printf("\n");
    }
}