#include <stdio.h>

int integerPower(int base, int exp);

int main()
{
    int result = integerPower(3, 3);
    printf("result = %d\n", result);
    return 0;
}

int integerPower(int base, int exp)
{
    int total = 1;
    if (exp > 1)
    {
        for (int i = 1; i <= exp; i++)
        {
            total *= base;
        }
        return total;
    }
    if (exp == 1)
    {
        return base;
    }
}