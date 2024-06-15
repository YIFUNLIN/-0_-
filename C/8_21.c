#include <stdio.h>
#include <string.h>

#define MAX_STRINGS 15
#define MAX_LENGTH 100

void sort_strings(char arr[][MAX_LENGTH], int n)
{
    char temp[MAX_LENGTH];
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (strcmp(arr[i], arr[j]) > 0)
            {
                strcpy(temp, arr[i]);
                strcpy(arr[i], arr[j]);
                strcpy(arr[j], temp);
            }
        }
    }
}

int main()
{
    char programs[MAX_STRINGS][MAX_LENGTH] = {
        "ProgramF",
        "ProgramB",
        "ProgramC",
        "ProgramD",
        "ProgramE",
        "ProgramA",
        "ProgramG",
        "ProgramH",
        "ProgramI",
        "ProgramJ"};

    int n = 10;

    printf("Before:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%s\n", programs[i]);
    }

    sort_strings(programs, n);

    printf("\nAfter:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%s\n", programs[i]);
    }

    return 0;
}
