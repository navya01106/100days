//Write a program to take a number as input and print its equivalent binary representation.
#include<stdio.h>
int main()
{
    int n,quotient,remainder;
    printf("Enter the number ");
    scanf("%d",&n);
    while(n!=0)
    {

        quotient=n/2;
        remainder=n%2;
        printf("%d",remainder);
        n=quotient;
    }
    return 0;
}
