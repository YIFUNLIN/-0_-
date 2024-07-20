#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct Node
{
    char data;
    struct Node *next;
} Node;

Node *createNode(char data)
{
    Node *newNode = (Node *)malloc(sizeof(Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

void insertSorted(Node **head, char data)
{
    Node *newNode = createNode(data);
    if (*head == NULL || (*head)->data >= newNode->data)
    {
        newNode->next = *head;
        *head = newNode;
    }
    else
    {
        Node *current = *head;
        while (current->next != NULL && current->next->data < newNode->data)
        {
            current = current->next;
        }
        newNode->next = current->next;
        current->next = newNode;
    }
}

void printListUpperCase(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        printf("%c -> ", temp->data - 'a' + 'A');
        temp = temp->next;
    }
    printf("NULL\n");
}

int main()
{
    Node *head = NULL;

    srand(time(NULL));
    for (int i = 0; i < 10; i++)
    {
        char randomChar = (rand() % 26) + 'a';
        insertSorted(&head, randomChar);
    }

    printListUpperCase(head);

    return 0;
}
