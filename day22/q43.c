//Write a program to check if a number is a strong number.

#include<stdio.h>
int main()
{
    int fac,num,temp,sum=0,digit;
    printf("enter any number ");
    scanf("%d",&num);
    temp=num;
    while(temp!=0)
    {
        digit=temp%10;
        fac=1;
        for(int j=1;j<=digit;j++)
        {
            fac=fac*j;
        }
        sum=sum+fac;
        temp=temp/10;
    }
    if(sum==num)
        printf("strong number");
    else
        printf("not strong number");
    return 0;
}