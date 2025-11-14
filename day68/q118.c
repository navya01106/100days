/*Q118: Write a program to take an input array of size n. The array should contain all the integers between 0 to n except for one. Print that missing number


Sample Test Cases:
Input 1:
nums1 = [0,3,2,4]
Output 1:
1

Input 2:
nums1 = [1,2,3]
Output 2:
0

Input 3:
nums1 = [0,4,3,1,5]
Output 3:
2

*/
#include <stdio.h>

int main() {
    int n, i, j;
    
    printf("Enter size of array: ");
    scanf("%d", &n);
    
    int a[n];
    
    printf("Enter elements: ");
    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    
    int m = -1;
    
    for(i = 0; i <= n; i++) {
        int f = 0;
        for(j = 0; j < n; j++) {
            if(a[j] == i) {
                f = 1;
                break;
            }
        }
        if(f == 0) {
            m = i;
            break;
        }
    }
    
    printf("Missing number: %d\n", m);
    
    return 0;
}
