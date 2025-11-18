//Ask the user for a filename. Check if it exists by trying to open it in read mode. If the file pointer is NULL, print an error message; otherwise, read and display its content.
#include <stdio.h>

int main() 
{
    char fn[100], l[256];
    FILE *f;
    
    printf("Enter filename: ");
    scanf("%s", fn);
    
    f = fopen(fn, "r");
    
    if (f == NULL)
     {
        printf("Error! File does not exist or cannot be opened.\n");
        return 1;
    }
    
    printf("File exists! Content:\n");
    
    while (fgets(l, sizeof(l), f) != NULL) {
        printf("%s", l);
    }
    
    fclose(f);
    
    return 0;
}