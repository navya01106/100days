//Write a program to input an integer and check whether it is positive, negative or zero using nested if–else.

# include<stdio.h>
int main()
{
    int num;
    printf("input any number\n");
    scanf("%d" ,&num);
    if(num>0)
    printf("%d is positive",num);
    else if(num<0)
    printf("%d is negative\n",num);
    else
    printf("number is zero\n");

    
    return 0;
}
