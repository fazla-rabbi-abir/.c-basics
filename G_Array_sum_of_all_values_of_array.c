#include <stdio.h>

int main()
{
    int index, sum = 0;

    // Read the number of elements
    scanf("%d", &index);

    // Declare the array
    int arr[index];

    // Read array elements
    for(int i = 0; i < index; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Calculate the sum
    for(int i = 0; i < index; i++)
    {
        sum += arr[i];
    }

    // Print the sum
    printf("%d\n", sum);

    return 0;
}