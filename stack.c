#include<stdio.h>
#define MAX 10
int stack[MAX], top=-1,x;
void push();
void pop();
void peek();
void display();
int main() {
    int choice;
    do{
        printf("enter your choice:\n1. push\n2. pop\n3. peek\n4. display\n5. exit\n");
        scanf("%d", &choice);
        switch(choice){
            case 1:
            push();
            break;
            case 2:
            pop();
            break;
            case 3:
            peek();
            break;
            case 4:
            display();
            break;
            case 5:
            choice = 0;
            break;
            default:
            printf("wrong choice\nTry again\n");
        }
    }while(choice!=0);
}
void push()
{
    printf("enter data\n");
    scanf("%d",&x);
    if(top==MAX-1) printf("overflow\n");
    else {
        top++;
        stack[top] =x;
    }
}
void pop()
{
    int temp;
    if(top==-1)
    {
        printf("underflow\n");
    }
    else{
        temp = stack[top];
        top--;
        printf("the popped element is %d\n",temp);
    }
}
void peek()
{
    printf("the topmost element is %d\n",stack[top]);
}
void display()
{
    printf("stack elements are:\n");
    for(int i=0;i<=top;i++)
    {
        printf("%d ",stack[i]);
    }
}