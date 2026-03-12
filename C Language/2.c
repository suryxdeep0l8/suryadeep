#include <stdio.h>
void main()
{
    int n, i, largest;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    
    int arr[n];
    
    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    
    largest = arr[0]; // Assume the first element is the largest
    
    for (i = 1; i < n; i++) 
    {
        if (arr[i] > largest) 
        {
            largest = arr[i]; // Update largest if current element is greater
        }
    }
    
    printf("The largest element in the array is: %d\n", largest);
}