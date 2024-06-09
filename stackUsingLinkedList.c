#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
}*top=NULL,*temp,*newnode;
int main() {
    push();
    push();
    push();
    printf("the final stack is ");
    display();
    peek();
    pop();
    display();
}
void push(){
    newnode=(struct node *)malloc(sizeof(struct node));
    printf("enter data\n");
    scanf("%d",&newnode->data);
    if(top==NULL){
        newnode->next=NULL;
        top=newnode;
    }
    else{
        newnode->next=top;
        top=newnode;
    }
}
void pop(){
    if(top==NULL){
        printf("underflow\n");
    }
    else{
        top=top->next;
    }
}
void peek(){
    printf("the topmost element is %d\n",top->data);
}
void display(){
    temp=top;
    while(temp!=NULL){
        printf("%d ",temp->data);
        temp=temp->next;
    }
}