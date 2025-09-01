#include<stdio.h>

int main()
{
    int array[5] = {2,3,6,8,10};
    *(array+1) = 4;

    for(int i=0; i<5; i++)
    {
        printf("%d ", array[i]);
    }
}