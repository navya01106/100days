//Write a Program to take a sorted array arr[] and an integer x as input, find the index (0-based) of the smallest element in arr[] that is greater than or equal to x and print it. This element is called the ceil of x. If such an element does not exist, print -1. Note: In case of multiple occurrences of ceil of x, return the index of the first occurrence.
#include <stdio.h>

int main() {
    int n,x,i,idx=-1;
    
    printf("enter size of array: ");
    scanf("%d",&n);
    
    int a[n];
    
    printf("enter sorted array elements: ");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    
    printf("enter x: ");
    scanf("%d",&x);
    
    for(i=0;i<n;i++) {
        if(a[i]>=x) {
            idx=i;
            break;
        }
    }
    
    printf("%d\n",idx);
    
    return 0;
}
