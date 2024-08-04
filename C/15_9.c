#include <stdio.h>

double product(int a, int b, float x, float y)
{
    return a * b * x * y;
}

int main()
{
    int a = 2, b = 3;
    float x = 1.5, y = 2.5;

    double result = product(a, b, x, y);
    printf("Product: %.2f\n", result);

    return 0;
}
