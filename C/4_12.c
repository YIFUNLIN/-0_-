#include <stdio.h>

int main()
{
    int total = 0;
    for (int i = 1; i <= 45; i++)
    {
        if (i % 3 == 0)
            total += i;
    }
    printf("%d\n", total);
}