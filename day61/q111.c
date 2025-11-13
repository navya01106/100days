/*Write a program to take an integer array arr and an integer k as inputs. The task is to find the first negative integer in each subarray of size k moving from left to right. If no negative exists in a window, print "0" for that window. Print the results separated by spaces as output.*/

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
    
    printf("First negative elements: ");
    
    for(i = 0; i <= n - k; i++) {
        int f = 0;
        for(j = i; j < i + k; j++) {
            if(a[j] < 0) {
                f = a[j];
                break;
            }
        }
        if(i == n - k) {
            printf("%d", f);
        } else {
            printf("%d ", f);
        }
    }
    return 0;
}