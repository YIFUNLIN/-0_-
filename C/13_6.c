#include <stdio.h>

double CUBE(double x)
{
    return x * x * x;
}

int main()
{
    double num;
    printf("Enter a number: ");
    scanf("%lf", &num);
    double cube = CUBE(num);
    printf("The cube of %.2f is %.2f\n", num, cube);

    return 0;
}
