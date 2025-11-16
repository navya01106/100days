/*Q121: Write a C program that creates a text file named info.txt in write mode. The program should take the user’s name and age as input, and write them to the file using fprintf(). After writing, display a message confirming that the data was successfully saved.

/*
Sample Test Cases:
Input 1:
Name: Rahul, Age: 23
Output 1:
File created successfully! Data written to info.txt

*/
#include <stdio.h>
#include <stdlib.h>

int main()
 {
    char n[100];
    int a;
    FILE *f;
    
    printf("Enter your name: ");
    scanf("%[^\n]", n);
    
    printf("Enter your age: ");
    scanf("%d", &a);
    
    f = fopen("info.txt", "w");
    
    if (f == NULL) 
    {
        printf("Error! Could not open file.\n");
        return 1;
    }
    
    fprintf(f, "Name: %s\n", n);
    fprintf(f, "Age: %d\n", a);
    
    fclose(f);
    
    printf("File created successfully! Data written to info.txt\n");
    
    return 0;
}