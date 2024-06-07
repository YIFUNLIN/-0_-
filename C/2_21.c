#include <stdio.h>
#include <math.h>
#include <stdlib.h>

// 打印矩形框架
void print_rectangle_frame()
{
    int width = 9, height = 10;
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            if (i == 0 || i == height - 1 || j == 0 || j == width - 1)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
}

// 打印特定星形图案
void print_star_pattern()
{
    printf("    *\n");
    printf("   ***\n");
    printf("  *****\n");
    printf("    *\n");
    printf("    *\n");
    printf("    *\n");
    printf("    *\n");
    printf("    *\n");
    printf("    *\n");
}

// 打印菱形
void print_diamond(int size)
{
    int i, j;
    for (i = 0; i <= 2 * size; i++)
    {
        for (j = 0; j <= 2 * size; j++)
        {
            if (abs(i - size) + abs(j - size) == size)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
}

// 打印椭圆
void print_ellipse(int a, int b)
{
    printf("   ***\n");
    printf("  *    *\n");
    printf(" *      *\n");
    printf(" *      *\n");
    printf(" *      *\n");
    printf(" *      *\n");
    printf(" *      *\n");
    printf("  *    *\n");
    printf("   ***\n");
}
int main()
{
    printf("Rectangle Frame:\n");
    print_rectangle_frame();
    printf("\nStar Pattern:\n");
    print_star_pattern();
    printf("\nDiamond Pattern:\n");
    print_diamond(5);
    printf("\nEllipse Pattern:\n");
    print_ellipse(10, 5);

    return 0;
}
