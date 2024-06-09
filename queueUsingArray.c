#include<stdio.h>
#include<stdlib.h>
#define MAX 8
int queue[MAX],i,j,val,rear,front;
rear=-1,front=-1;
int main(){
enque();
deque();
enque();
display();
}
void enque(){
    printf("enter number to insert\n");
    scanf("%d",&val);
    if(rear==MAX-1){
        printf("overflow\n");
    }
    else if(rear==-1&&front==-1 ){
        front=rear=0;
        queue[rear]=val;
    }
    else{
        rear++;
        queue[rear]=val;
    }
}\
void display(){
    if(front==-1||rear==-1){
        printf("No elements\n");
    }
    else{
        for(i=front;i<=rear;i++){
            printf("%d ",queue[i]);
        }
    }
}
void deque(){
    if(front==-1||front>rear){
        printf("underflow\n");
    }
    else{
        printf("element deleted\n");
        front++;
        if(front>rear){
            front=rear=-1;
        }
    }
}