//Write a program to check if a number is a palindrome.
#include<stdio.h>
int main()
{
    int num,quotient,remainder,reverse=0,n;
    printf("Enter the number ");
    scanf("%d",&num);
    n=num;
    while(num!=0)
    {
        remainder=num%10;
        reverse=reverse*10+remainder;
        quotient=num/10;
        num=quotient;
    }
    if(reverse==n)
        printf("palindrome");
    else
        printf("not palindrome");
    return 0;
}
