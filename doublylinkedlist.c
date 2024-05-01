#include<stdio.h>
#include<stdlib.h>
struct node{
    struct node *prev;
    int data;
    struct node *next;
}*head, *newnode, *tail, *temp;
int i,pos;
    void create();
    void traverse();
    void insert_beg();
    void insert_end();
    void insert_mid();
    void delete_beg();
    void delete_end();
    void delete_mid();
int main() {
    create();
    traverse();
    insert_beg();
    traverse();
    insert_end();
    traverse();
    insert_mid();
    traverse();
    delete_beg();
    traverse();
    delete_end();
    traverse();
    delete_mid();
    traverse();
}
void create()
{
    int i,n;
    printf("how many nodes you want to create\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        newnode=(struct node*)malloc(sizeof(struct node));
        printf("enter data\n");
        scanf("%d",&newnode->data);
        newnode->prev=NULL;
        newnode->next=NULL;
        if(head==NULL)
        {
            head=newnode;
            tail=newnode;
        }
        else
        {
            tail->next=newnode;
            newnode->prev=tail;
            tail=tail->next;
        }
    }
}
void traverse()
{
    temp=head;
    while(temp!=NULL)
    {
        printf("%d",temp->data);
        temp=temp->next;
    }
}
void insert_beg()
{
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("enter data to insert in beginning of linked list ");
    scanf("%d",&newnode->data);
    newnode->prev=NULL;
    if(head==NULL)
    {
        head=newnode;
        tail=newnode;
    }
    else{
        newnode->next=head;
        head->prev=newnode;
        head=newnode;
    }
}
void insert_end()
{
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("enter data to insert at end of linked list ");
    scanf("%d",&newnode->data);
    newnode->next=NULL;
     if(head==NULL)
    {
        head=newnode;
        tail=newnode;
    }
    else{
        newnode->prev=tail;
        tail->next=newnode;
        tail=newnode;
    }
}
void insert_mid()
{
    temp=head;
    int pos;
    printf("enter position to insert data element :");
    scanf("%d",&pos);
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("enter data to insert in linked list ");
    scanf("%d",&newnode->data);
    for(i=1;i<pos;i++)
    {
        temp=temp->next;
    }
    if(head==NULL)
    {
        head=newnode;
        tail=newnode;
    }
    else{
        newnode->prev=temp;
        newnode->next=temp->next;
        temp->next=newnode;
        newnode->next->prev=newnode;
    }
}
void delete_beg()
{
    printf("linked list after deleting first node: \n");
    temp=head;
    head=head->next;
    free(temp);
}
void delete_end()
{
    printf("linked list after deleting last node: \n");
    temp=tail;
    tail=tail->prev;
    tail->next=NULL;
    free(temp);
}
void delete_mid()
{
    temp=head;
    int pos;
    printf("enter position to delete its element:\n");
    scanf("%d",&pos);
    for(i=1;i<pos;i++)
    {
        temp=temp->next;
    }
    printf("linked list after deleting desired node\n");
    temp->prev->next=temp->next;
    temp->next->prev=temp->prev;
    free(temp);
}