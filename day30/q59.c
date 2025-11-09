//Count even and odd numbers in an array.
#include<stdio.h>
int main()
{
int arr[100],n,i,even=0,odd=0;
printf("Enter size of array: ");
scanf("%d",&n);
printf("Enter elements: ");
for(i=0;i<n;i++)
    {
scanf("%d",&arr[i]);
    }
for(i=0;i<n;i++)
    {
if(arr[i]%2==0)
        {
even++;
        }
else
        {
odd++;
        }
    }
printf("Even numbers = %d\n",even);
printf("Odd numbers = %d",odd);
return 0;
}