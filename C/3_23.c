#include <stdio.h>

int main()
{
    int i;
    int smallest;
    int num;
    printf("輸入連續的21個非負整數:");
    for (i = 1; i <= 21; i++)
    {
        printf("輸入第%d個數字", i);
        scanf("%d", &num); // num 每次輸入的新數字 都放在num
        if (i == 1)
            smallest = num;
        else if (num < smallest) // 更新最小值
            smallest = num;
    }
    printf("最小值是%d", smallest);
    return 0;
}