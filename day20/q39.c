//Write a program to find the product of odd digits of a number.
#include <stdio.h>

int main() {
    int n, product, digit;
    
    printf("Enter a number: ");
    scanf("%d", &n);
    
    product = 1;
    
    while(n != 0) {
        digit = n % 10;
        if(digit % 2 != 0) {
            product = product * digit;
        }
        n = n / 10;
    }
    
    printf("Product of odd digits is: %d\n", product);
    
    return 0;
}