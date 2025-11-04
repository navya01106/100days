#include<stdio.h>
int main()
{
    int num,sum=0,i;

    printf("enter any number:");
    scanf("%d",&num);

    for(i=1;i<num;i++)
    {
        if(num%i==0)
        sum=sum+i;
}
if(sum==num)
printf("perfect number\n");
else
printf("not perfect number\n");
return 0;


}