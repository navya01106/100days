//Convert a lowercase string to uppercase without using built-in functions.
#include <stdio.h>

int main() {
    char s[100];
    int i;

    printf("Enter string here: ");
    scanf("%s", s);

    for (i = 0; s[i] != '\0'; i++) {
        if (s[i] >= 'a' && s[i] <= 'z') {
            s[i] = s[i] - 32;
        }
    }

    printf("The uppercase string is: %s\n", s);
    return 0;
}