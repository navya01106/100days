/*Q121: Write a C program that creates a text file named info.txt in write mode. The program should take the user’s name and age as input, and write them to the file using fprintf(). After writing, display a message confirming that the data was successfully saved.


Sample Test Cases:
Input 1:
Name: Rahul, Age: 23
Output 1:
File created successfully! Data written to info.txt

*/
#include <stdio.h>

int main() {
    char l[256];
    FILE *f;
    
    f = fopen("info.txt", "r");
    
    if (f == NULL) {
        printf("Error! Could not open file.\n");
        return 1;
    }
    
    while (fgets(l, sizeof(l), f) != NULL) {
        printf("%s", l);
    }
    
    fclose(f);
    
    return 0;
}
