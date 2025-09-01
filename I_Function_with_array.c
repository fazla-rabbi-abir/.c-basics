#include<stdio.h>

void fun(int array[])
{
    array[2] = 2;
}
int main()
{
    int array[5] = {1,3,5,7,9};
    printf("%d \n", array[2]);

    fun(array);
    printf("%d", array[2]);

    return 0;
}