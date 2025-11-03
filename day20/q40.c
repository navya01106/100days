//Write a program to find the 1’s complement of a binary number and print it.
#include <stdio.h>
#include <string.h>

int main() {
    char binary[50], complement[50];
    int i, len;
    
    printf("Enter a binary number: ");
    scanf("%s", binary);
    
    len = strlen(binary);
    
    for(i = 0; i < len; i++) {
        if(binary[i] == '0') {
            complement[i] = '1';
        } else if(binary[i] == '1') {
            complement[i] = '0';
        } else {
            printf("Invalid binary number\n");
            return 0;
        }
    }
    
    complement[len] = '\0';
    
    printf("Binary number: %s\n", binary);
    printf("1's complement: %s\n", complement);
    
    return 0;
}