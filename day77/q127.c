//Write a program that reads text from input.txt, converts all lowercase letters to uppercase, and writes the result to output.txt.
#include <stdio.h>
#include <ctype.h>

int main() {
    char c;
    FILE *fi, *fo;
    
    fi = fopen("input.txt", "r");
    
    if (fi == NULL) {
        printf("Error! Could not open input.txt\n");
        return 1;
    }
    
    fo = fopen("output.txt", "w");
    
    if (fo == NULL) {
        printf("Error! Could not open output.txt\n");
        fclose(fi);
        return 1;
    }
    
    while ((c = fgetc(fi)) != EOF) {
        fputc(toupper(c), fo);
    }
    
    fclose(fi);
    fclose(fo);
    
    printf("File converted successfully! Check output.txt\n");
    
    return 0;
}