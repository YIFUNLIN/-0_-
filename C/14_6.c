#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *array;
    int originalSize, newSize;

    printf("Enter the size of the array: ");
    scanf("%d", &originalSize);

    array = (int *)malloc(originalSize * sizeof(int));

    if (array == NULL)
    {
        printf("Memory allocation failed!\n");
        return 1;
    }

    printf("Enter %d integers:\n", originalSize);
    for (int i = 0; i < originalSize; i++)
    {
        scanf("%d", &array[i]);
    }

    printf("Original array elements:\n");
    for (int i = 0; i < originalSize; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");

    // 重新配置陣列的記憶體，使其大小變為原來的 40%
    newSize = (int)(originalSize * 0.4);
    array = (int *)realloc(array, newSize * sizeof(int));

    if (array == NULL)
    {
        printf("Memory reallocation failed!\n");
        return 1;
    }

    // 列印重新配置後的陣列中的數值
    printf("New array elements (40%% of original):\n");
    for (int i = 0; i < newSize; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");

    // 釋放動態配置的記憶體
    free(array);

    return 0;
}
