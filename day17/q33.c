//Write a program to check if a number is an Armstrong number.

#include <stdio.h>
#include <math.h>

int main() 
{
    int n, temp, d, sum, count;
    
    printf("Enter a number: ");
    scanf("%d", &n);
    
    temp = n;
    count = 0;
    
    while(temp != 0) {
        temp = temp / 10;
        count++;
    }
    
    temp = n;
    sum = 0;
    
    while(temp != 0) {
        d = temp % 10;
        sum = sum + pow(d, count);
        temp = temp / 10;
    }
    
    if(sum == n) {
        printf("%d is an Armstrong number\n", n);
    } else {
        printf("%d is not an Armstrong number\n", n);
    }
    
    return 0;
}