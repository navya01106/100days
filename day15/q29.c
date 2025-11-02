//Write a program to print the factorial of a number n.
#include<stdio.h>
int main()
{
    int n,i,fact=1;
    printf("enter any number");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    fact=fact*i;
    printf("factorial=%d",fact);
    return 0;
}
