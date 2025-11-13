/*Write a program to take an integer array arr as input. The task is to find the maximum sum of any contiguous subarray using Kadane's algorithm. Print the maximum sum as output. If all elements are negative, print the largest (least negative) element.*/
#include <stdio.h>

int main() {
    int n, i;
    
    printf("Enter size of array: ");
    scanf("%d", &n);
    
    int a[n];
    
    printf("Enter elements: ");
    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    
    int m = a[0];
    int c = a[0];
    
    for(i = 1; i < n; i++) {
        if(c + a[i] > a[i]) {
            c = c + a[i];
        } else {
            c = a[i];
        }
        if(c > m) {
            m = c;
        }
    }
    
    printf("Maximum sum: %d\n", m);
    
    return 0;
}