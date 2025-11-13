/*Write a Program to take an integer array nums. Print an array answer such that answer[i] is equal to the product of all the elements of nums except nums[i]. The product of any prefix or suffix of nums is guaranteed to fit in a 32-bit integer.
*/

#include <stdio.h>

int main() 
{
    int n, i, j;
    
    printf("Enter size of array: ");
    scanf("%d", &n);
    
    int a[n], b[n];
    
    printf("Enter elements: ");
    for(i = 0; i < n; i++)
     {
        scanf("%d", &a[i]);
    }
    
    for(i = 0; i < n; i++) 
    {
        int p = 1;
        for(j = 0; j < n; j++) 
        {
            if(i != j) {
                p = p * a[j];
            }
        }
        b[i] = p;
    }
    
    printf("Product array: ");
    for(i = 0; i < n; i++) {
        if(i == n - 1) {
            printf("%d", b[i]);
        }
         else 
        {
            printf("%d, ", b[i]);
        }
    }
    return 0;
}