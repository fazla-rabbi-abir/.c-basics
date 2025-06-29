#include <stdio.h>

int main() 
{
    int n, i;
    int arr[100];  // Array with a maximum size of 100

    // Input: number of elements
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Input: array elements
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }

    // Output: array in reverse order
    printf("The array in reverse order is:\n");
    for(i = n - 1; i >= 0; i--) 
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
