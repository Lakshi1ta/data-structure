#include<stdio.h>
#define N 10
int main() {
    int arr[N],n,i,search;
    printf("enter elements of array:");
    for(i=0;i<N;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("enter element to search:");
    scanf("%d",&search);
    for(i=0;i<N;i++)
    {
        if(arr[i]==search)
        {
            printf("%d is present in %d index of array",search,i+1);
            break;
        }
    }
    if(i==N)
    {
        printf("%d is not present in array",search);
    }
}