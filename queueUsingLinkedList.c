#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
}*front=NULL,*rear=NULL,*newnode,*temp;
int main() {
    enque();
    enque();
    enque();
    deque();
    display();
}
void enque() {
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("enter data\n");
    scanf("%d",&newnode->data);
    newnode->next=NULL;
    if(front==NULL && rear==NULL){
        front=rear=newnode;
    }
    else{
        rear->next=newnode;
        rear=newnode;
    }
}
void display(){
    temp=front;
    if(front==NULL && rear==NULL){
        printf("empty queue\n");
    }
    else{
        while(temp!=NULL){
            printf("%d ",temp->data);
            temp=temp->next;
        }
    }
} void deque(){
    printf(" queue is");
    if(front==NULL&& rear==NULL){
        printf("empty queue\n");
    }
    else{
        temp=front;
        front=front->next;
        free(temp);
    }
}
