#include <stdio.h>
#include <stdlib.h>
#include <time.h>

char get_random()
{
    return 'A' + rand() % 26; // A:ASCII = 65 ， 65+ 0~25 = A ~ Z
}

int main()
{
    srand(time(NULL));

    char target = get_random();
    char guess;

    printf("Please guess A ~ Z\n");

    while (1)
    {
        printf("What your guess char:");
        scanf("%c", &guess);

        if (guess == target)
        {
            printf("Correct\n");
            break;
        }
        else if (guess < target)
        {
            printf("Too ahead.Try again. \n");
        }
        else
        {
            printf("Too behind.Try again. \n");
        }
    }
    return 0;
}