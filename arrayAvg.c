// 1. Write a C Program to read n elements in an array and find the average. 
#include<stdio.h>
int main() {
    int arr[10],n,i,sum=0;
    printf("enter number of elements in array\n");
    scanf("%d",&n);
    printf("enter elements :");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        printf("%d",arr[i]);
        sum=sum+arr[i];
    }
    int avg=sum/n;
    printf("average of array elements is %d",avg);
}