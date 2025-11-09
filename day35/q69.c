//Find the second largest element in an array.
#include<stdio.h>
int main()
{
int arr[100],n,i,max,secondmax;
printf("Enter size of array: ");
scanf("%d",&n);
printf("Enter elements: ");
for(i=0;i<n;i++)
    {
scanf("%d",&arr[i]);
    }
max=arr[0];
secondmax=arr[0];
for(i=1;i<n;i++)
    {
if(arr[i]>max)
        {
secondmax=max;
max=arr[i];
        }
else if(arr[i]>secondmax && arr[i]!=max)
        {
secondmax=arr[i];
        }
    }
printf("Second largest element = %d",secondmax);
return 0;
}