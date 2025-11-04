#include <stdio.h>

int main() 
{
    int n, i, num, den;
    float sum;
    
    printf("Enter number of terms: ");
    scanf("%d", &n);
    
    sum = 0.0;
    
    for(i = 1; i <= n; i++) {
        num = 2 * i;
        den = 4 * i - 1;
        sum = sum + (float)num / den;
        printf("%d/%d ", num, den);
        if(i < n) {
            printf("+ ");
        }
    }
    
    printf("\n");
    printf("Sum of the series = %.4f\n", sum);
    
    return 0;
}