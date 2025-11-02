//Write a program to print the reverse of a number n.
#include<stdio.h>
int main()
{
    int num,reverse=0;
    printf("enter any number");
    scanf("%d",&num);
    while(num!=0)
    {
        reverse=reverse*10;
        reverse=reverse+num%10;
        num=num/10;
    }
    printf("reverse=%d",reverse);
    return 0;
}
