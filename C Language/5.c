#include <stdio.h>

void main() 
{
    int arr[2][2];

    printf("Enter elements of the array:\n\n");

    for(int i = 0; i < 2; i++) 
    {
        for(int j = 0; j < 2; j++) 
        {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    printf("\n");
    int min = arr[0][0];

    for(int i = 0; i < 2; i++) 
    {
        for(int j = 0; j < 2; j++) 
        {
            if(arr[i][j] < min) 
            {
                min = arr[i][j];
            }
        }
    }
    for(int i = 0; i < 2; i++) 
    {
        for(int j = 0; j < 2; j++) 
        {
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }
    printf("Smallest element = %d\n", min);
}