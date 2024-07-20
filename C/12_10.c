#include <stdio.h>
#include <string.h>

#define MAX 100

typedef struct Stack
{
    int top;
    char items[MAX];
} Stack;

void push(Stack *s, char c)
{
    if (s->top < MAX - 1)
    {
        s->items[++s->top] = c;
    }
}

char pop(Stack *s)
{
    if (s->top >= 0)
    {
        return s->items[s->top--];
    }
    return '\0';
}

int main()
{
    char str[MAX];
    Stack s;
    s.top = -1;

    printf("Input: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0'; // 移除換行符號

    for (int i = 0; i < strlen(str); i++)
    {
        push(&s, str[i]);
    }

    printf("Reverse: ");
    while (s.top >= 0)
    {
        printf("%c", pop(&s));
    }
    printf("\n");

    return 0;
}
