//Write a program to find the sum of the series: 1 + 3/4 + 5/6 + 7/8 + … up to n terms.
#include<stdio.h>
int main()
{
    int n, num, den;
    float sum;
    
    printf("enter number of terms: ");
    scanf("%d",&n);
    
    sum=0;
    num=1;
    den=2;
    
    for(int i=1;i<=n;i++)
    {
        sum=sum+(float)num/den;
        num=num+2;
        den=den+2;
    }
    
    printf("sum = %f",sum);
    
    return 0;
}