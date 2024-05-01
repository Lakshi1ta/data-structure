#include<stdio.h>
int main() {
    int n, rem, res=0, number;
    printf("enter a 3 digit number\n");
    scanf("%d", &n);
    number=n;
    while(number!=0)
    {
        rem=number%10;
        res=res+(rem*rem*rem);
        number=number/10;
    }
    if (res==n)
    {
        printf("armstrong\n");
    }
    else{
        printf(" not armstrong\n");
    }
}