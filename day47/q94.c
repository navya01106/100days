//Find the longest word in a sentence.
#include <stdio.h>

int main() {
    char s[100],word[100],longest[100];
    int i,j=0,max=0,len=0;
    
    printf("enter a sentence: ");
    fgets(s,100,stdin);
    
    for(i=0;s[i]!='\0';i++) {
        if(s[i]!=' ' && s[i]!='\n') {
            word[j]=s[i];
            j++;
            len++;
        }
        else {
            word[j]='\0';
            if(len>max) {
                max=len;
                for(int k=0;word[k]!='\0';k++)
                    longest[k]=word[k];
                longest[max]='\0';
            }
            j=0;
            len=0;
        }
    }
    
    printf("longest word: %s\n",longest);
    
    return 0;
}