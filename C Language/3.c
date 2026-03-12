#include <stdio.h>
void main()
{
    int n, i, smallest;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    
    int arr[n];
    
    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    
    smallest = arr[0]; // Assume the first element is the smallest
    
    for (i = 1; i < n; i++) 
    {
        if (arr[i] < smallest) 
        {
            smallest = arr[i]; // Update smallest if current element is smaller
        }
    }
    
    printf("The smallest element in the array is: %d\n", smallest);
}