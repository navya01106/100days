/*Q117: Write a program to take two sorted arrays of size m and n as input. Merge both the arrays such that the merged array is also sorted. Print the merged array.


Sample Test Cases:
Input 1:
nums1 = [2,7,11,15] nums2 = [4,8,10]
Output 1:
2 4 7 8 10 11 15

Input 2:
nums1 = [1,2,7] nums2 = [9,10,17]
Output 2:
1 2 7 9 10 17

Input 3:
nums1 = [-10,-2,7] nums2 = [-3, -1, 7]
Output 3:
-10 -3 -2 -1 7 7

*/
#include <stdio.h>

int main() 
{
    int m, n, i, j, k;
    
    printf("Enter size of first array: ");
    scanf("%d", &m);
    
    int a[m];
    
    printf("Enter elements of first array: ");
    for(i = 0; i < m; i++) 
    {
        scanf("%d", &a[i]);
    }
    
    printf("Enter size of second array: ");
    scanf("%d", &n);
    
    int b[n];
    
    printf("Enter elements of second array: ");
    for(i = 0; i < n; i++) 
    {
        scanf("%d", &b[i]);
    }
    
    int c[m + n];
    
    for(i = 0; i < m; i++)
     {
        c[i] = a[i];
    }
    
    for(i = 0; i < n; i++)
     {
        c[m + i] = b[i];
    }
    
    for(i = 0; i < m + n - 1; i++)
     {
        for(j = i + 1; j < m + n; j++) 
        {
            if(c[i] > c[j]) 
            {
                int t = c[i];
                c[i] = c[j];
                c[j] = t;
            }
        }
    }
    
    printf("Merged array: ");
    for(i = 0; i < m + n; i++)
     {
        if(i == m + n - 1) 
        {
            printf("%d", c[i]);
        }
         else 
        {
            printf("%d ", c[i]);
        }
    }
    
    printf("\n");
    
    return 0;
}