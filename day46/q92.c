//Find the first repeating lowercase alphabet in a string.
#include <stdio.h>

int main() {
    char str[100];
    int i,j,found=0;
    
    printf("enter a string: ");
    fgets(str,100,stdin);
    
    for(i=0;str[i]!='\0';i++) {
        if(str[i]>='a' && str[i]<='z') {
            for(j=i+1;str[j]!='\0';j++) {
                if(str[i]==str[j]) {
                    printf("first repeating lowercase alphabet: %c\n",str[i]);
                    found=1;
                    break;
                }
            }
            if(found==1)
                break;
        }
    }
    
    if(found==0)
        printf("no repeating lowercase alphabet found\n");
    
    return 0;
}