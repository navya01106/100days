/*Open an existing file in append mode and allow the user to enter a new line of text. Append the text at the end without overwriting existing content.*/
#include <stdio.h>

int main() {
    char fn[100], txt[256];
    FILE *f;
    
    printf("Enter filename: ");
    scanf("%s", fn);
    
    f = fopen(fn, "a");
    
    if (f == NULL) {
        printf("Error! Could not open file.\n");
        return 1;
    }
    
    printf("Enter text to append: ");
    scanf(" %[^\n]", txt);
    
    fprintf(f, "%s\n", txt);
    
    fclose(f);
    
    printf("Text appended successfully to %s\n", fn);
    
    return 0;
}
