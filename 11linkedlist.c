#include<stdio.h>

struct node
{
    int data;
    struct node *next;
};

void lltraversal(struct node *ptr)
{
    while (ptr != NULL)
    {
        printf("element: %d\n", ptr-> data);
        ptr= ptr->next;
    }
}

int main()
{    struct node *head;
struct node *second;
struct node *third;
struct node *forth;

head=(struct node *)malloc(sizeof(struct node));
second=(struct node *)malloc(sizeof(struct node));
third=(struct node *)malloc(sizeof(struct node));
forth=(struct node *)malloc(sizeof(struct node));

head->data=101;
head->next=second;
second->data=11;
second->next=third;
third->data=23456789;
third->next=forth;
forth->data=1000;
forth->next=NULL;

lltraversal(head);
    
        return 0;
}
