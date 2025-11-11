//Print initials of a name with the surname displayed in full.

#include <stdio.h>

int main() {
    char s[100];
    int i,last=0;
    
    printf("enter name: ");
    fgets(s,100,stdin);
    
    for(i=0;s[i]!='\0';i++) {
        if(s[i]==' ')
            last=i+1;
    }
    
    if(s[0]>='a' && s[0]<='z')
        printf("%c. ",s[0]-32);
    else if(s[0]>='A' && s[0]<='Z')
        printf("%c. ",s[0]);
    
    for(i=0;i<last-1;i++) {
        if(s[i]==' ') {
            if(s[i+1]>='a' && s[i+1]<='z')
                printf("%c. ",s[i+1]-32);
            else if(s[i+1]>='A' && s[i+1]<='Z')
                printf("%c. ",s[i+1]);
        }
    }
    
    for(i=last;s[i]!='\0' && s[i]!='\n';i++)
        printf("%c",s[i]);
    
    printf("\n");
    
    return 0;
}