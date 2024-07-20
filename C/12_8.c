#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct Node
{
    int data;
    struct Node *next;
} Node;

Node *createNode(int data)
{
    Node *newNode = (Node *)malloc(sizeof(Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

void insertSorted(Node **head, int data)
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

Node *mergeLists(Node *list1, Node *list2)
{
    Node dummy;
    Node *tail = &dummy;
    dummy.next = NULL;

    while (list1 != NULL && list2 != NULL)
    {
        if (list1->data <= list2->data)
        {
            tail->next = list1;
            list1 = list1->next;
        }
        else
        {
            tail->next = list2;
            list2 = list2->next;
        }
        tail = tail->next;
    }

    tail->next = (list1 != NULL) ? list1 : list2;
    return dummy.next;
}

void printList(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

int main()
{
    Node *list1 = NULL;
    Node *list2 = NULL;

    srand(time(NULL));
    for (int i = 0; i < 5; i++)
    {
        int randomNum1 = rand() % 51;
        int randomNum2 = rand() % 101;
        insertSorted(&list1, randomNum1);
        insertSorted(&list2, randomNum2);
    }

    printf("List 1: ");
    printList(list1);
    printf("List 2: ");
    printList(list2);

    Node *mergedList = mergeLists(list1, list2);
    printf("Merged List: ");
    printList(mergedList);

    return 0;
}
