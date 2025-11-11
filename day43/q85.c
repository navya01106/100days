//reverse a string
#include <stdio.h>

int main() {
    char s[100];
    char temp;
    int i = 0;
    int j = 0;
    int len;

    printf("Enter string: ");
    scanf("%s", s);
    while (s[len] != '\0') {
        len++;
    }
    
    j = len - 1;

    while (i < j) {
        temp = s[i];
        s[i] = s[j];
        s[j] = temp;
        i++;
        j--;
    }

    printf("Reversed: %s\n", s);
    return 0;
}