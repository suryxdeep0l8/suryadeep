#include <stdio.h>
#include <ctype.h>

void main() 
{
    char str[100];
    
    printf("Enter a string: ");
    gets(str);
    
    for (int i = 0; str[i] != '\0'; i++) 
    {
        str[i] = toupper(str[i]);
    }
    
    printf("Converted string: %s\n", str);
}