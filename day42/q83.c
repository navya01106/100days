//Count vowels and consonants in a string.
#include <stdio.h>

int main() {
    char s[100];
    int v = 0;
    int c = 0;
    int i;

    printf("Enter a word or string (no spaces): ");
    scanf("%s", s);

    for (i = 0; s[i] != '\0'; i++) {
        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' ||
            s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U') {
            v++;
        } else if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z')) {
            c++;
        }
    }

    printf("Total Vowels: %d\n", v);
    printf("Total Consonants: %d\n", c);
    return 0;
}