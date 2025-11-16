/*Q124: Take two filenames from the user – a source file and a destination file. Copy all the content from the source file to the destination file using fgetc() and fputc().

/*
Sample Test Cases:
Input 1:
Source File: source.txt (Content: Learning C File Handling)
Output 1:
File copied successfully to destination.txt

*/
#include <stdio.h>

int main() 
{
    char s[100], d[100], c;
    FILE *fs, *fd;
    
    printf("Enter source filename: ");
    scanf("%s", s);
    
    printf("Enter destination filename: ");
    scanf("%s", d);
    
    fs = fopen(s, "r");
    
    if (fs == NULL) {
        printf("Error! Could not open source file.\n");
        return 1;
    }
    
    fd = fopen(d, "w");
    
    if (fd == NULL) {
        printf("Error! Could not open destination file.\n");
        fclose(fs);
        return 1;
    }
    
    while ((c = fgetc(fs)) != EOF) {
        fputc(c, fd);
    }
    
    fclose(fs);
    fclose(fd);
    
    printf("File copied successfully to %s\n", d);
    
    return 0;
}