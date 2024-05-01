#include<stdio.h>
#define N 5
int main() {
    int arr[20],i,search,first,last,mid;
    printf("enter elements:");
    for(i=0;i<N;i++)
    {
        scanf("%d",&arr[i]);
    }
    first=0;
    last=N-1;
    printf("enter element to search:");
    scanf("%d",&search);
    while(first<=last)
    {
        mid=(first+last)/2;
        if(search==arr[mid])
        {
            printf("element found");
            break;
        }
        else if(search>arr[mid])
        {
            first=mid+1;
        }
        else{
            last=mid-1;
        }
    }
    if(first>last)
    {
        printf("element not found");
    }
}