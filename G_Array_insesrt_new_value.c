#include<stdio.h>

int main()
{
    int index, new_index, new_value;
    
    scanf("%d", &index);

    int arr[index];

    for(int i=0; i<index; i++) //input values
    {
        scanf("%d", &arr[i]);
    }

    scanf("%d %d", &new_index, &new_value); //input new insert index & value

    for(int i=0; i>=new_index+1; i--) //moving values new index
    {
        arr[i] = arr[i-1];
    }

    arr[new_index] = new_value;

    for(int i=0; i<=index; i++) //print value
    {
        printf("%d", arr[i]);
    }
}