//Check if two strings are anagrams of each other.
#include <stdio.h>

int main() {
    char a[100],b[100];
    int i,c[26]={0},flag=1;
    
    printf("enter first string: ");
    fgets(a,100,stdin);
    printf("enter second string: ");
    fgets(b,100,stdin);
    
    for(i=0;a[i]!='\0';i++) {
        if(a[i]>='a' && a[i]<='z')
            c[a[i]-'a']++;
        else if(a[i]>='A' && a[i]<='Z')
            c[a[i]-'A']++;
    }
    
    for(i=0;b[i]!='\0';i++) {
        if(b[i]>='a' && b[i]<='z')
            c[b[i]-'a']--;
        else if(b[i]>='A' && b[i]<='Z')
            c[b[i]-'A']--;
    }
    
    for(i=0;i<26;i++) {
        if(c[i]!=0) {
            flag=0;
            break;
        }
    }
    
    if(flag)
        printf("anagrams\n");
    else
        printf("not anagrams\n");
    
    return 0;
}