//Write a Program to take a positive integer n as input, and find the pivot integer x such that the sum of all elements between 1 and x inclusively equals the sum of all elements between x and n inclusively. Print the pivot integer x. If no such integer exists, print -1. Assume that it is guaranteed that there will be at most one pivot integer for the given input.
#include <stdio.h>

int main() {
    int n,x,i,l,r,p=-1;
    
    printf("enter n: ");
    scanf("%d",&n);
    
    for(x=1;x<=n;x++) {
        l=0;
        r=0;
        
        for(i=1;i<=x;i++)
            l+=i;
        
        for(i=x;i<=n;i++)
            r+=i;
        
        if(l==r) {
            p=x;
            break;
        }
    }
    
    printf("%d\n",p);
    
    return 0;
}