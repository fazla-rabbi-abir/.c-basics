#include<stdio.h>

int main()
{
    int index, search_value, found_index=-1;
    scanf("%d", &index);

    int arr[index];

    for(int i=0; i<index; i++)
    {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &search_value);

    for(int i=0; i<index; i++)
    {
        if(arr[index] == search_value)
        {
            found_index = i;
            break;
        }
    }
    printf("Searched value = %d", found_index);
}