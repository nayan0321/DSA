#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

void travelNode(struct node *ptr)
{
    while (ptr != NULL)
    {
        printf("%d\n", ptr->data);
        ptr = ptr->next;
    }
}

struct node *deleteFromStart(struct node *head)
{
    // struct node *p = (struct node *)malloc(sizeof(struct node));
    // p->next = head;
    struct node *p = head;
    head = head->next;
    free(p);
    return head;
}

struct node *deleteFromEnd(struct node *head)
{
    struct node *p = head;
    struct node *q = head->next;
    while (q->next != NULL)
    {
        p = p->next;
        q = q->next;
    }
    p->next = q->next;
    free(q);
    return head;
}

struct node *deleteByIndex(struct node *head, int index)
{
    struct node *p = head;
    struct node *q = head->next;
    for (int i = 0; i < index - 1; i++)
    {
        p = p->next;
        q = q->next;
    }
    p->next = q->next;
    free(q);
    return head;
}

struct node *deleteByValue(struct node *head, int value)
{
    struct node *p = head;
    struct node *q = head->next;

    while (q->next != NULL && q->data != value)
    {
        p = p->next;
        q = q->next;
    }
    p->next = q->next;
    free(q);
    return head;
}

int main()
{
    struct node *head;
    struct node *second;
    struct node *third;
    struct node *fourth;

    head = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));
    fourth = (struct node *)malloc(sizeof(struct node));

    head->data = 10;
    head->next = second;

    second->data = 11;
    second->next = third;

    third->data = 12;
    third->next = fourth;

    fourth->data = 13;
    fourth->next = NULL;

    // travelNode(head);
    // printf("FROM START\n");

    // head = deleteFromStart(head);
    // travelNode(head);

    // printf("FROM INDEX\n");
    // head = deleteByIndex(head, 2);
    // travelNode(head);

    // printf("FROM END\n");
    // head = deleteFromEnd(head);
    // travelNode(head);

    printf("BY VALUE\n");
    head = deleteByValue(head, 12);
    travelNode(head);

    return 0;
}