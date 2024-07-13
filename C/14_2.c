#include <stdio.h>
#include <stdarg.h>

double sum(int count, ...)
{
    va_list args;
    va_start(args, count);

    double total = 0;
    for (int i = 0; i < count; i++)
    {
        total += va_arg(args, double);
    }

    va_end(args);
    return total;
}

double product(int count, ...)
{
    va_list args;
    va_start(args, count);

    double result = 1;
    for (int i = 0; i < count; i++)
    {
        result *= va_arg(args, double);
    }

    va_end(args);
    return result;
}

int main()
{

    printf("Sum of 1.0, 2.0, 3.0: %.2f\n", sum(3, 1.0, 2.0, 3.0));
    printf("Sum of 4.5, 5.5: %.2f\n", sum(2, 4.5, 5.5));
    printf("Sum of 6.1, 7.2, 8.3, 9.4: %.2f\n", sum(4, 6.1, 7.2, 8.3, 9.4));

    printf("Product of 1.0, 2.0, 3.0: %.2f\n", product(3, 1.0, 2.0, 3.0));
    printf("Product of 4.5, 5.5: %.2f\n", product(2, 4.5, 5.5));
    printf("Product of 6.1, 7.2, 8.3, 9.4: %.2f\n", product(4, 6.1, 7.2, 8.3, 9.4));

    return 0;
}
