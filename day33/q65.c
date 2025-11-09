//Search in a sorted array using binary search.
#include<stdio.h>
int main()
{
int arr[100],n,i,search,low,high,mid,found=0;
printf("Enter size of array: ");
scanf("%d",&n);
printf("Enter sorted elements: ");
for(i=0;i<n;i++)
    {
scanf("%d",&arr[i]);
    }
printf("Enter element to search: ");
scanf("%d",&search);
low=0;
high=n-1;
while(low<=high)
    {
mid=(low+high)/2;
if(arr[mid]==search)
        {
printf("Element found at position %d",mid+1);
found=1;
break;
        }
else if(arr[mid]<search)
        {
low=mid+1;
        }
else
        {
high=mid-1;
        }
    }
if(found==0)
    {
printf("Element not found");
    }
return 0;
}