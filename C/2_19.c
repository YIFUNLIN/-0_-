#include <stdio.h>

int main()
{
    int integer1;
    int integer2;
    int integer3;
    int sum;
    int avg;
    int product;
    int minimum;
    int maximum;

    printf("Enter three different integers:");
    scanf("%d", &integer1);
    scanf("%d", &integer2);
    scanf("%d", &integer3);

    sum = integer1 + integer2 + integer3;
    avg = (integer1 + integer2 + integer3) / 3;
    product = integer1 * integer2 * integer3;
    if (integer1 > integer2)
    {
        if (integer1 > integer3)
        {
            maximum = integer1;
            if (integer2 > integer3)
                minimum = integer3;
            else
                minimum = integer2;
        }
        else
            maximum = integer3;
        minimum = integer2;
    }
    else if (integer1 < integer2)
    {
        if (integer2 > integer3)
        {
            maximum = integer2;
            if (integer1 < integer3)
                minimum = integer1;
            else
                minimum = integer3;
        }
        else
        {
            maximum = integer3;
            minimum = integer1;
        }
    }
    printf("sum = %d\n", sum);
    printf("average = %d\n", avg);
    printf("product = %d\n", product);
    printf("maximum = %d\n", maximum);
    printf("minimum = %d\n", minimum);
    return 0;
}