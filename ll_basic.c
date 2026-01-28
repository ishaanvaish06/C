#include <stdio.h>

struct Node
{
    int data;
    struct Node* next;
};

struct Node *head=NULL;

void insert(int val)
{
    struct Node* new=(struct Node*)malloc(sizeof(struct Node*));
    new->data=val;
    new->next=NULL;

    if(head==NULL)
    {
        head=new;
        return;
    }
    struct Node* temp=head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=new;
}

void delete()
{
    if(head==NULL)
    {
        printf("List is empty\n");
        return;
    }
    if(head->next==NULL)
    {
        free(head);
        head=NULL;
        return;
    }
    struct Node* temp=head;
    while(temp->next != NULL)
    {
        temp=temp->next;
    }
    free(temp);
    temp->next=NULL;
}

void display()
{
    struct Node *temp=head;
    if(temp==NULL)
    {
        printf("List is empty\n");
        return;
    }
    while(temp!=NULL)
    {
        printf("%d -> ",temp->data);
        temp=temp->next;
    }
    printf("list is empty\n");
}