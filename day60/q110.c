/*Write a program to take an integer array arr and an integer k as inputs. The task is to find the maximum element in each subarray of size k moving from left to right. Print the maximum elements for each window separated by spaces as output.
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
    
    printf("Maximum elements: ");
    
    for(i = 0; i <= n - k; i++) {
        int m = a[i];
        for(j = i; j < i + k; j++) {
            if(a[j] > m) {
                m = a[j];
            }
        }
        if(i == n - k) {
            printf("%d", m);
        } else {
            printf("%d ", m);
        }
    }
    return 0;
}
