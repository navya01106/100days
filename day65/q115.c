/*Q115: Write a program to take two strings s and t as inputs (assume all characters are lowercase). The task is to determine if s and t are valid anagrams, meaning they contain the same characters with the same frequencies. Print "Anagram" if they are, otherwise "Not Anagram".


Sample Test Cases:
Input 1:
s = "anagram", t = "nagaram"
Output 1:
Anagram

Input 2:
s = "rat", t = "car"
Output 2:
Not Anagram

*/
#include <stdio.h>
#include <string.h>

int main() 
{
    char s[1000], t[1000];
    int i, j;
    
    printf("Enter first string: ");
    scanf("%s", s);
    
    printf("Enter second string: ");
    scanf("%s", t);
    
    int n = strlen(s);
    int m = strlen(t);
    
    if(n != m)
     {
        printf("Not Anagram\n");
        return 0;
    }
    
    int a[26] = {0};
    int b[26] = {0};
    
    for(i = 0; i < n; i++) 
    {
        a[s[i] - 'a']++;
    }
    
    for(i = 0; i < m; i++)
     {
        b[t[i] - 'a']++;
    }
    
    int f = 1;
    for(i = 0; i < 26; i++)
     {
        if(a[i] != b[i]) 
        {
            f = 0;
            break;
        }
    }
    
    if(f == 1) {
        printf("Anagram\n");
    } else {
        printf("Not Anagram\n");
    }
    
    return 0;
}