#include<stdio.h>
int main() {
    int n,x;
    printf("enter sixe of array:");
    scanf("%d", &n);
    int arr[n];
    printf("enter elements :");
    for (int i = 0; i < n;i++) 
    {
        scanf("%d", &arr[i]);
    }
    for(int i = 0; i < n;i++)
    {
        printf("%d", arr[i]);
    }
    int pos,elem;
    printf("enter position to insert aray element:");
    scanf("%d",&pos);
    printf("enter element to insert:");
    scanf("%d",&elem);
    n++;
    for(int i = n-1; i >= pos; i--)
    {
        arr[i] =arr[i-1];
    }
    arr[pos-1]=x;
    for(int i = 0; i < n;i++)
    {
        printf("%d", arr[i]);
    }
}
