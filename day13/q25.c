/*Write a program to implement a basic calculator using switch-case for +, -, *, /, %.*/
#include <stdio.h>
int main()
{
    int a,b,result;
    char op;
    printf("Enter two numbers: ");
    scanf("%d %d",&a,&b);
    printf("Enter an operator (+, -, *, /, %%): ");
    scanf(" %c",&op);
    switch(op)
    {
        case '+':
        result=a+b;
        break;
        case '-':
        result=a-b;
        break;
        case '*':
        result=a*b;
        break;
        case '/':
        result=a/b;
        break;
        case '%':
        result=a%b;
        break;
        default:
        printf("Invalid operator");
        
    }
    printf("Result: %d",result);
    return 0;
}
