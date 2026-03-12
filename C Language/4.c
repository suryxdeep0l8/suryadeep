#include <stdio.h>
void main()
{
    int n, i, odd = 0, even = 0;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    
    int arr[n];
    
    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    
    for (i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }
    
    printf("Number of even elements in the array: %d\n", even);
    printf("Number of odd elements in the array: %d\n", odd);
}