//Write a program to print all the prime numbers from 1 to n.
#include <stdio.h>

int main()
 {
    int n, i, j, P;
    
    printf("Enter a number: ");
    scanf("%d", &n);
    
    printf("Prime numbers from 1 to %d:\n", n);
    
    for (i = 2; i <= n; i++) {
        P= 1;
        
        for (j = 2; j * j <= i; j++) {
            if (i % j == 0)
            {
                P = 0;
                break;
            }
        }
        
        if (P) 
        {
            printf("%d ", i);
        }
    }
    
    printf("\n");
    
    return 0;
}