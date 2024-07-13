#include <stdio.h>

// 定義 ADD 函式
double ADD(double a, double b, double c)
{
    return a + b + c;
}

int main()
{
    double a, b, c;
    printf("Enter three numbers: ");
    scanf("%lf %lf %lf", &a, &b, &c);
    double sum = ADD(a, b, c);
    printf("The sum of a, b and c is %.1f\n", sum);

    return 0;
}
