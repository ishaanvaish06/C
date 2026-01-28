#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node* next;
};

struct Node *head=NULL;

void insert(int val)
{
    struct Node* new=(struct Node*)malloc(sizeof(struct Node));
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
    while(temp->next!=NULL)
    {
        printf("%d -> ",temp->data);
        temp=temp->next;
    }
    printf("list is empty\n");
}

int main(int argc, char const *argv[])
{
    int choice = 1;
    while(choice !=4)  {
        printf("enter case 1 to insert 2 delete 3 to display 4 to exit\n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1: {
                int val;
                printf("Enter value to insert: ");
                scanf("%d",&val);
                insert(val);
                break;
            }
            case 2: {
                delete();
                break;
            }
            case 3: {
                display();
                break;
            }
            
            default:
                printf("Invalid choice\n");
        }
    }
    
    return 0;
}
