#include <stdio.h>

/*橢圓面積 =π(圓周率)×a×b(其中a,b分別是橢圓的長半軸,短半軸的長)*/
double areaOfEllipse(double x, double y)
{
    const double PI = 3.1415926;
    return PI * x * y;
}

int main()
{
    double radius[5][2] = {
        {5.0, 7.0},
        {19.0, 12.0},
        {23.0, 9.0},
        {13.0, 10.0},
        {4.0, 14.0}};

    for (int i = 0; i < 5; i++)
    {
        double x = radius[i][0];
        double y = radius[i][1];
        double area = areaOfEllipse(x, y);
        printf("橢圓 %d 的面積:%.2f\n", i + 1, area);
    }

    return 0;
}