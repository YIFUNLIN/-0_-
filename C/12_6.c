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

void insertRandomChars(Node **head, int count, char start, char end)
{
    for (int i = 0; i < count; i++)
    {
        char randomChar = (rand() % (end - start + 1)) + start;
        Node *newNode = createNode(randomChar);
        newNode->next = *head;
        *head = newNode;
    }
}

void appendList(Node **head1, Node *head2)
{
    if (*head1 == NULL)
    {
        *head1 = head2;
        return;
    }
    Node *temp = *head1;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = head2;
}

void printList(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        printf("%c -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

int main()
{
    Node *list1 = NULL;
    Node *list2 = NULL;

    srand(time(NULL));

    insertRandomChars(&list1, 5, 'A', 'Z');
    insertRandomChars(&list2, 5, 'a', 'z');

    printf("List 1: ");
    printList(list1);
    printf("List 2: ");
    printList(list2);

    appendList(&list1, list2);

    printf("Combined List: ");
    printList(list1);

    return 0;
}
