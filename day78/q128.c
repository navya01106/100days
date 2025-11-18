//Read a text file and count how many vowels and consonants are in the file. Ignore digits and special characters.
#include <stdio.h>
#include <ctype.h>

int main() {
    char fn[100], c;
    int v = 0, con = 0;
    FILE *f;
    
    printf("Enter filename: ");
    scanf("%s", fn);
    
    f = fopen(fn, "r");
    
    if (f == NULL) {
        printf("Error! Could not open file.\n");
        return 1;
    }
    
    while ((c = fgetc(f)) != EOF) {
        if (isalpha(c)) {
            c = tolower(c);
            if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
                v++;
            } else {
                con++;
            }
        }
    }
    
    fclose(f);
    
    printf("Vowels: %d\n", v);
    printf("Consonants: %d\n", con);
    
    return 0;
}