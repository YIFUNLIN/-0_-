#include <stdio.h>
#include <ctype.h>

int main()
{
    char p[100];
    printf("Enter a string: ");
    gets(p);

    for (int i = 0; p[i] != '\0'; i++)
    {
        if (islower(p[i]))
        {
            p[i] = toupper(p[i]);
        }
        else if (isupper(p[i]))
        {
            p[i] = tolower(p[i]);
        }
    }

    printf("Converted string: %s\n", p);
    return 0;
}
