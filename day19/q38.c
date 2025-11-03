//Write a program to find the sum of digits of a number.
#include <stdio.h>

int main() {
    int n, sum, digit;
    
    printf("Enter a number: ");
    scanf("%d", &n);
    
    sum = 0;
    
    while(n != 0) {
        digit = n % 10;
        sum = sum + digit;
        n = n / 10;
    }
    
    printf("Sum of digits is: %d\n", sum);
    
    return 0;
}