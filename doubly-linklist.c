#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *pre;
    struct node *next;
};

void travelNode(struct node *head)
{
    struct node *ptr = head;
    while (ptr->next != NULL)
    {
        printf("%d \n", ptr->data);
        ptr = ptr->next;
    }
}

void reverseTravel(struct node *lastNode)
{
    struct node *p = lastNode;
    while (lastNode->pre != NULL)
    {
        printf("%d\n", p->data);
        p = p->pre;
    }
}

int main()
{
    struct node *head = (struct node *)malloc(sizeof(struct node));
    struct node *second = (struct node *)malloc(sizeof(struct node));
    struct node *third = (struct node *)malloc(sizeof(struct node));

    head->data = 11;
    head->next = second;
    head->pre = NULL;

    second->data = 12;
    second->next = third;
    second->pre = head;

    third->data = 13;
    third->next = NULL;
    third->pre = second;
 
    travelNode(head);
    reverseTravel(third);
     
    return 0;
}