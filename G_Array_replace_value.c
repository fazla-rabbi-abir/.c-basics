#include<stdio.h>

int main()
{
    int index;
    scanf("%d", &index);

    int arr[index];

    for(int i=0; i<index; i++)
    {
        scanf("%d", &arr[i]);
    }

    for(int i=0; i<index; i++)
    {
        if(arr[index] > 0)
        {
            arr[index] = 1;
        }
        else if(arr[index] < 0)
        {
            arr[index] = 2;
        }
    }
    
    for(int i=0; i<index; i++)
    {
        printf("%d", arr[i]);
    }
}
