#include<stdio.h>

int main()
{
    int x = 10;
    int* p = &x;

    printf("Normal value = %d\n", x);
    printf("Pointer value = %p", p);
}