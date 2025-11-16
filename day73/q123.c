/*Q123: Read a text file and count the total number of characters, words, and lines. A word is defined as a sequence of non-space characters separated by spaces or newlines.

/*
Sample Test Cases:
Input 1:
File: sample.txt (Content: Hello world\nThis is C programming)
Output 1:
Characters: 31
Words: 5
Lines: 2

*/
#include <stdio.h>

int main() {
    char c;
    int ch = 0, w = 0, l = 0, inw = 0;
    FILE *f;
    
    f = fopen("sample.txt", "r");
    
    if (f == NULL) {
        printf("Error! Could not open file.\n");
        return 1;
    }
    
    while ((c = fgetc(f)) != EOF) {
        ch++;
        
        if (c == '\n') {
            l++;
        }
        
        if (c == ' ' || c == '\n' || c == '\t') {
            inw = 0;
        } else if (inw == 0) {
            inw = 1;
            w++;
        }
    }
    
    fclose(f);
    
    printf("Characters: %d\n", ch);
    printf("Words: %d\n", w);
    printf("Lines: %d\n", l);
    
    return 0;
}
