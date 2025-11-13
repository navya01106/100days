/*Write a program to take an integer array arr and an integer k as inputs. Print the maximum sum of all the subarrays of size k.
*/

#include <stdio.h>

int main() {
    int n, k, i, j;
    
    printf("Enter size of array: ");
    scanf("%d", &n);
    
    int a[n];
    
    printf("Enter elements: ");
    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    
    printf("Enter k: ");
    scanf("%d", &k);
    
    int m = 0;
    
    for(i = 0; i <= n - k; i++) {
        int s = 0;
        for(j = i; j < i + k; j++) {
            s = s + a[j];
        }
        if(i == 0 || s > m) {
            m = s;
        }
    }
    
    printf("Maximum sum: %d\n", m);
    
    return 0;
}