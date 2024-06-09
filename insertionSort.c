#include<stdio.h>
#define N 10
int main() {
    int arr[N],n,i,j,temp;
    printf("enter elements of array:");
    for(i=0;i<N;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=1;i<N;i++){
        temp=arr[i];
        j=i-1;
        while(temp<arr[j]&& j>=0){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=temp;
    }
    printf("sorted array is :");
    for(i=0;i<N;i++){
        printf("%d",arr[i]);
    }
}