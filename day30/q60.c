//Count positive, negative, and zero elements in an array.
#include<stdio.h>
int main()
{
int arr[100],n,i,positive=0,negative=0,zero=0;
printf("Enter size of array: ");
scanf("%d",&n);
printf("Enter elements: ");
for(i=0;i<n;i++)
    {
scanf("%d",&arr[i]);
    }
for(i=0;i<n;i++)
    {
if(arr[i]>0)
        {
positive++;
        }
else if(arr[i]<0)
        {
negative++;
        }
else
        {
zero++;
        }
    }
printf("Positive numbers = %d\n",positive);
printf("Negative numbers = %d\n",negative);
printf("Zero = %d",zero);
return 0;
}