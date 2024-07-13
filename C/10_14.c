#include <stdio.h>

void displayBits(unsigned value);
unsigned reverseBits(unsigned value);

void displayBits(unsigned value)
{
    unsigned c;
    unsigned displayMask = 1 << 31;

    printf("%10u = ", value);

    for (c = 1; c <= 32; ++c)
    {
        putchar(value & displayMask ? '1' : '0');
        value <<= 1;

        if (c % 8 == 0)
        {
            putchar(' ');
        }
    }

    putchar('\n');
}

unsigned reverseBits(unsigned value)
{
    unsigned reversedValue = 0;
    unsigned bitCount = sizeof(value) * 8;

    for (unsigned i = 0; i < bitCount; ++i)
    {
        if (value & (1 << i))
        {
            reversedValue |= 1 << ((bitCount - 1) - i);
        }
    }

    return reversedValue;
}

int main()
{
    unsigned number;

    printf("Enter an unsigned integer: ");
    scanf("%u", &number);

    printf("\nOriginal value in bits:\n");
    displayBits(number);

    unsigned reversedNumber = reverseBits(number);

    printf("\nReversed value in bits:\n");
    displayBits(reversedNumber);

    return 0;
}
