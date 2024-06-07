#include <stdio.h>

int main()
{
    int N;
    double result_025, result_050, result_075;

    printf("N        0.25*N      0.50*N      0.75*N\n");
    printf("------------------------------------------------\n");

    for (N = 10; N <= 100; N += 10)
    {
        result_025 = 0.25 * N;
        result_050 = 0.50 * N;
        result_075 = 0.75 * N;

        printf("%-10.6f%-12.6f%-12.6f%-12.6f\n", (double)N, result_025, result_050, result_075);
    }

    return 0;
}
