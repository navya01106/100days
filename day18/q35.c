#include<stdio.h>
int main()
{
    int i,n,count=0;
    printf("enter any number\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
    if(n%i==0)
    {
    printf("factor of %d is %d\n", n, i);
    count++;
}
}
printf("total number of factors of %d are %d\n", n, count);
return 0;
}
