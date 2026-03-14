#include <stdio.h>

void main() 
{
    char str[100];
    int characters = 0, digits = 0, spaces = 0;
    
    printf("Enter a string: ");
    gets(str);
    
    for (int i = 0; str[i] != '\0'; i++) 
    {
        if (str[i] >= 'a' && str[i] <= 'z' || str[i] >= 'A' && str[i] <= 'Z') 
        {
            characters++;
        } 

        else if (str[i] >= '0' && str[i] <= '9') 
        {
            digits++;
        } 

        else if (str[i] == ' ') 
        {
            spaces++;
        }
    }
    
    printf("Characters: %d\n", characters);
    printf("Digits: %d\n", digits);
    printf("Spaces: %d\n", spaces);
}