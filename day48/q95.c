//Check if one string is a rotation of another.
#include <stdio.h>

int main() {
    char s1[100],s2[100],temp[200];
    int i,j,len1=0,len2=0,found=0;
    
    printf("enter first string: ");
    fgets(s1,100,stdin);
    printf("enter second string: ");
    fgets(s2,100,stdin);
    
    for(i=0;s1[i]!='\0' && s1[i]!='\n';i++)
        len1++;
    for(i=0;s2[i]!='\0' && s2[i]!='\n';i++)
        len2++;
    
    if(len1!=len2) {
        printf("not a rotation\n");
        return 0;
    }
    
    for(i=0;i<len1;i++)
        temp[i]=s1[i];
    for(i=0;i<len1;i++)
        temp[len1+i]=s1[i];
    temp[2*len1]='\0';
    
    for(i=0;i<=len1;i++) {
        for(j=0;j<len2;j++) {
            if(temp[i+j]!=s2[j])
                break;
        }
        if(j==len2) {
            found=1;
            break;
        }
    }
    
    if(found)
        printf("rotation\n");
    else
        printf("not a rotation\n");
    
    return 0;
}