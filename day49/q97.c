//Print the initials of a name.
#include <stdio.h>

int main() {
    char s[100];
    int i;
    
    printf("enter name: ");
    fgets(s,100,stdin);
    
    if(s[0]>='a' && s[0]<='z')
        printf("%c",s[0]-32);
    else if(s[0]>='A' && s[0]<='Z')
        printf("%c",s[0]);
    
    for(i=0;s[i]!='\0';i++) {
        if(s[i]==' ') {
            if(s[i+1]>='a' && s[i+1]<='z')
                printf("%c",s[i+1]-32);
            else if(s[i+1]>='A' && s[i+1]<='Z')
                printf("%c",s[i+1]);
        }
    }
    return 0;
}