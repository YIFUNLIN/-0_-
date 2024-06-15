#include <stdio.h>
#include <stdbool.h>

int main()
{
    char input[10];
    char unique[10];
    int unique_count = 0;

    printf("Please input a string A~Z,include ten chae:\n");

    for (int i = 0; i < 10; i++)
    {
        scanf(" %c", &input[i]); // 讀取字元並存入input陣列

        bool is_duplicate = false;

        // 檢查字元是否已經輸入過
        for (int j = 0; j < unique_count; j++)
        {
            if (input[i] == unique[j])
            {
                is_duplicate = true;
                break;
            }
        }

        // 如果不是重複字元，則將其存入unique陣列並輸出
        if (!is_duplicate)
        {
            unique[unique_count++] = input[i];
            printf("%c\n", input[i]);
        }
    }

    return 0;
}
