#include <stdio.h>

double sum(int a, int b, int c, float x, float y, float z)
{
    return a + b + c + x + y + z;
}

int main()
{
    int a = 1, b = 2, c = 3;
    float x = 1.1, y = 2.2, z = 3.3;

    double result = sum(a, b, c, x, y, z);
    printf("Sum: %.2f\n", result);

    return 0;
}
