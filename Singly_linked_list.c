#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
}*head, *newnode, *temp,*prev;
int n,i;
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
void create() {
    head=NULL;
    printf("how many nodes you want to create");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        newnode=(struct node*)malloc(sizeof(struct node));
        printf("enter data");
        scanf("%d",&newnode->data);
        newnode->next=NULL;
        if(head==NULL)
        {
            head=newnode;
            temp=newnode;
        }
        else
        {
            temp->next=newnode;
            temp=newnode;
        }
    }
}
void traverse()
{
    if(head==NULL)
    {
        printf("linked list is empty");
    }
    else
    {
        temp=head;
        while(temp!=NULL)
        {
            printf("%d",temp->data);
            temp=temp->next;
        }
    }
}
void insert_beg()
{
    temp=head;
    newnode=(struct node *)malloc(sizeof(struct node));
    printf("enter data to insert in beginning of linked list");
    scanf("%d",&newnode->data);
    newnode->next=head;
    head=newnode;
}
void insert_end()
{
    temp=head;
    newnode=(struct node *)malloc(sizeof(struct node));
    printf("enter data to insert in end of linked list");
    scanf("%d",&newnode->data);
    newnode->next=NULL;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=newnode;
}
void insert_mid()
{
    temp=head;
    int pos;
    printf("enter position to enter data");
    scanf("%d",&pos);
    newnode=(struct node *)malloc(sizeof(struct node));
    printf("enter data to insert in linked list");
    scanf("%d",&newnode->data);
    newnode->next=NULL;
    for(int i=1;i<pos;i++){
        temp=temp->next;
    }
    newnode->next=temp->next;
    temp->next=newnode;

}
void delete_beg()
{
    printf("linked list after deletion of first node\n");
    temp=head;
    head=temp->next;
    free(temp);
}
void delete_end()
{
    printf("linked list after deletion of last node\n");
    temp=head;
    while(temp->next!=NULL)
    {
        prev=temp;
        temp=temp->next;
    }
    prev->next=NULL;
    free(temp);
}
void delete_mid()
{
    int pos;
    temp=head;
    printf("enter position to delete its element");
    scanf("%d",&pos);
    for(int i=1; i<pos; i++)
    {
        prev=temp;
        temp=temp->next;
    }
    prev->next=temp->next;
    free(temp);
}
