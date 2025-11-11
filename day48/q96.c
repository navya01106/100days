//Reverse each word in a sentence without changing the word order.
#include <stdio.h>

int main() {
    char s[100];
    int i,start=0,end;
    
    printf("enter a sentence: ");
    fgets(s,100,stdin);
    
    for(i=0;s[i]!='\0';i++) {
        if(s[i]==' ' || s[i]=='\n' || s[i+1]=='\0') {
            if(s[i+1]=='\0' && s[i]!='\n' && s[i]!=' ')
                end=i;
            else
                end=i-1;
            
            while(start<end) {
                char t=s[start];
                s[start]=s[end];
                s[end]=t;
                start++;
                end--;
            }
            start=i+1;
        }
    }
    
    printf("reversed words: %s",s);
    
    return 0;
}