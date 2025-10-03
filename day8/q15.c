//Write a program to input a character and check whether it is an uppercase alphabet, lowercase alphabet, digit, or special character.
#include <stdio.h>
int main() {
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);

    if(ch >= 'A' && ch <= 'Z')
        printf("uppercase alphabet.");
    else if(ch >= 'a' && ch <= 'z')
        printf("lowercase alphabet");
    else if(ch >= '0' && ch <= '9')
        printf("digit");
    else
        printf("special character");
    return 0;
}
