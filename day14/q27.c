//Write a program to print the sum of the first n odd numbers.
#include<stdio.h>
int main()
{
    int n,i,sum=0;
    printf("enter any number");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    sum=sum+i;
    printf("sum=%d",sum);
    return 0;
}
