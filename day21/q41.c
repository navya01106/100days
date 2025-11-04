#include<stdio.h>
#include<math.h>
int main()
{
    int first,last,num,count,temp,a;
    printf("enter any number");
    scanf("%d",&num);
    last=num%10;
    temp=num;
    count=0;
    while(temp!=0)
    {
    temp=temp/10;
    count++;
    }
    first=num/(int)pow(10,count-1);
      
     a = num % (int)pow(10, count - 1);
    a = a / 10;
    
    num = last * pow(10, count - 1) + a * 10 + first;
    
    printf(" %d\n", num);
    
    return 0;
}