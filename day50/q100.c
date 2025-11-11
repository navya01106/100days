//Print all sub-strings of a string.

#include <stdio.h>

int main() {
    char s[100];
    int i,j,k,len=0;
    
    printf("enter a string: ");
    fgets(s,100,stdin);
    
    for(i=0;s[i]!='\0' && s[i]!='\n';i++)
        len++;
    
    printf("substrings:\n");
    for(i=0;i<len;i++) {
        for(j=i;j<len;j++) {
            for(k=i;k<=j;k++)
                printf("%c",s[k]);
            printf("\n");
        }
    }
    
    return 0;
}