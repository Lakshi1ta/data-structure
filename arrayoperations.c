#include<stdio.h>
int n,i;
void create(int * arr);
void insert(int * arr);
void traverse(int * arr);
void search(int * arr);
void delete(int * arr);
int main() {
    printf("enter size of array\n");
    scanf("%d",&n);
    int arr[n];
    create(arr);
    traverse(arr);
    insert(arr);
    traverse(arr);
    delete(arr);
    traverse(arr);
    search(arr);
}
void create(int * arr){
    printf("enter elements of array\n");
    for(int i = 0; i < n; i++){
        scanf("%d",&arr[i]);
    }
}
void traverse(int * arr){
    for(i=0;i<n;i++){
        printf("%d",arr[i]);
    }
}
void search(int * arr){
    int search;
    printf("enter element to search\n");
    scanf("%d",&search);
    for(i=0;i<n;i++){
        if(arr[i]==search){
            printf("element found at index %d and position %d",i,i+1);
            break;
        }
    }
    if(i==n)
    {
        printf("element not found..."); 
    }
}
void insert(int *arr){
    int pos,elem;
    printf("enter position to insert element");
    scanf("%d",&pos);
    printf("enter element to insert at index %d",pos);
    scanf("%d",&elem);
    n++;
    for(i=n-1;i>=pos;i--){
        arr[i] = arr[i-1];
    }
    arr[pos-1]=elem;
}
void delete(int *arr){
    int pos;
    printf("enter position of element to delete");
    scanf("%d",&pos);
    for(i=pos-1;i<n;i++){
        arr[i]=arr[i+1];
    }
    n--;
}
