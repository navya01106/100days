//Write a program to input two numbers and display their sum, difference, product, and quotient.

# include<stdio.h>
int main()
{
    int a,b;
    printf("enter any two numbers: ");
    scanf("%d %d" ,&a ,&b);

    printf("sum= %d" ,a+b);
    printf(" difference= %d" ,a-b);
    printf(" product= %d" ,a*b);
    printf(" quotients= %d" ,a/b);
    return 0;
}
