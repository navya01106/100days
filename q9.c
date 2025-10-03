//Write a program to calculate simple and compound interest for given principal, rate, and time.
# include<stdio.h>
int main()
{
    int si;
    float ci;
    int p,r,t;
    printf("Enter the principle amount, rate of interest and time in years\n");
    scanf("%d %d %d",&p,&r,&t);

si=(p*r*t)/100;
    ci = p *(pow( (1 + r / 100.0), t)) - p;

printf("Simple Interest = %d\n",si);
    printf("Compound Interest = %f\n",ci);
    return 0;
}
