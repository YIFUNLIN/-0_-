#include <stdio.h>
int gcd(int x, int y)
{
    if (y == 0)
        return x;
    return gcd(y, x % y);
}

int main()
{
    int x, y;
    int ans;

    printf("Please enter two numbers:\n");
    scanf("%d", &x);
    scanf("%d", &y);

    ans = gcd(x, y);
    printf("GCD ans:%d\n", ans);
    return 0;
}