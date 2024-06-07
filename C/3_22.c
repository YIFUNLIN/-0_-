#include <stdio.h>

int main()
{
    for (int i = 1; i <= 20; i++)
    {
        printf("%d    ", i);

        if (i % 2 == 0) // 每兩個字就換行
        {
            printf("\n");
        }
    }
    return 0;
}
