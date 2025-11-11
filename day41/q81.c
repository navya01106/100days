//Count characters in a string without using built-in length functions.
#include <stdio.h>

int main() {
    char s[100];
    int c = 0;

    printf("Enter a string: ");
    scanf("%s", s);

    while (s[c] != '\0') {
        c++;
    }

    printf("The number of characters is: %d\n", c);
    return 0;
}