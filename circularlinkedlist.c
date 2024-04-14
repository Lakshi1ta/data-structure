#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
}*tail, *newnode, *temp, *prev;
int n,i,pos;
    void create();
    void traverse();
    void insert_beg();
    void insert_mid();
    void insert_end();
    void delete_beg();
    void delete_mid();
    void delete_end();
int main() {
    create();
    traverse();
    insert_beg();
    traverse();
    insert_mid();
    traverse();
    insert_end();
    traverse();
    delete_beg();
    traverse();
    delete_mid();
    traverse();
    delete_end();
    traverse();

}
void create()
{
    tail=NULL;
    printf("enter number of nodes in circular linked list\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        newnode=(struct node*)malloc(sizeof(struct node));
        printf("enter data : ");
        scanf("%d",&newnode->data);
        newnode->next=NULL;
        if (tail==NULL)
        {
            tail=newnode;
            tail->next=newnode;
        }
        else
        {
            newnode->next=tail->next;
            tail->next=newnode;
            tail=newnode;
        }
    }
}
void traverse()
{
    if(tail==NULL)
    {
        printf("linked list is empty\n");
    }
    else
    {
        temp=tail->next;
        while(temp->next!=tail->next)
        {
            printf("%d\n",temp->data);
            temp=temp->next;
        }
        printf("%d\n",temp->data);
    }
}
void insert_beg()
{
    newnode = (struct node*)malloc(sizeof(struct node));
    printf("enter data to insert in beginning");
    scanf("%d",&newnode->data);
    newnode -> next = NULL;
    if (tail==NULL) 
    { 
        tail = newnode;
        tail->next = newnode;
    }
    else 
    {
        newnode->next = tail->next; 
        tail->next = newnode;
    }
}
void insert_mid()
{
    temp=tail->next;
    int pos;
    printf("enter position to insert node\n");
    scanf("%d", &pos);
    newnode=(struct node*)malloc(sizeof(struct node));
    newnode->next=NULL;
    printf("enter data to insert in position");
    scanf("%d",&newnode->data);
    for(i=1; i<pos-1; i++)
    {
        temp=temp->next;
    }
    newnode->next=temp->next;
    temp->next=newnode;
}
void insert_end()
{
    newnode = (struct node*)malloc(sizeof(struct node));
    printf("enter data to insert in end ");
    scanf("%d",&newnode->data);
    newnode -> next = NULL;
    if (tail==NULL) 
    { 
        tail = newnode;
        tail->next = newnode;
    }
    else 
    {
        newnode->next = tail->next;
        tail->next = newnode;
        tail = newnode;
    }

}
void delete_beg()
{
    printf("Circular linked list after deletion of first node\n");
    temp=tail->next;
    tail->next = temp->next;
    free(temp);
}
void delete_mid()
{
    temp=tail->next;
    printf("enter position to delete its node\n");
    scanf("%d",&pos);
    for(i=1;i<pos;i++)
    {
        prev=temp;
        temp=temp->next;
    }
    prev->next=temp->next;
    free(temp);
}
void delete_end()
{
    printf("Circular linked list after deleting last node :");
    temp=tail->next;
    while(temp->next!=tail->next)
    {
        prev=temp;
        temp=temp->next;
    }
    prev->next =tail->next;
    free(tail);
    tail=prev;
}