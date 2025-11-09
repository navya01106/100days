//Find the digit that occurs the most times in an integer number.
#include<stdio.h>
int main()
{
int num,digit,count[10]={0},i,max,maxdigit;
printf("Enter a number: ");
scanf("%d",&num);
if(num<0)
    {
num=-num;
    }
while(num>0)
    {
digit=num%10;
count[digit]++;
num=num/10;
    }
max=count[0];
maxdigit=0;
for(i=1;i<10;i++)
    {
if(count[i]>max)
        {
max=count[i];
maxdigit=i;
        }
    }
printf("Most occurring digit = %d\n",maxdigit);
printf("Occurrence = %d",max);
return 0;
}