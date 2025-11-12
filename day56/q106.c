/*Write a program to take an array arr[] of integers as input, 
the task is to find the next greater element for each element of the array in order of their appearance in the array.
 Next greater element of an element in the array is the nearest element on the right which is greater than the current element.
 If there does not exist next greater of current element, then next greater element for current element is -1.

N.B:
- Print the output for each element in a comma separated fashion.
- Do not use Stack, use brute force approach (nested loop) to solve.*/

#include <stdio.h>

int main() {
    int n,i,j,nge;
    
    printf("enter size: ");
    scanf("%d",&n);
    
    int a[n];
    
    printf("enter elements: ");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    
    printf("next greater elements: ");
    for(i=0;i<n;i++) {
        nge=-1;
        for(j=i+1;j<n;j++) {
            if(a[j]>a[i]) {
                nge=a[j];
                break;
            }
        }
        if(i==n-1)
            printf("%d",nge);
        else
            printf("%d,",nge);
    }
    printf("\n");
    
    return 0;
}
