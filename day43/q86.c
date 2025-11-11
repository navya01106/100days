//Check if a string is a palindrome.
#include <stdio.h>

int main() {
    char str[100];
    int i, len = 0, flag = 1;
    
    printf("enter a string: ");
    scanf("%s", str);
    
    while(str[len] != '\0') {
        len++;
    }
    
    for(i = 0; i < len / 2; i++) {
        if(str[i] != str[len - i - 1]) {
            flag = 0;
            break;
        }
    }
    
    if(flag == 1)
        printf("its a palindrome\n");
    else
        printf("not a palindrome\n");
    
    return 0;
}