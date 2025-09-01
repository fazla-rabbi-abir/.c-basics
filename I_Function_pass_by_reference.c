#include<stdio.h>

int pass(int* x)
{
    *x = 10;
}

int main()
{
    int x = 20;
    pass(&x);

    printf("%d", x);
}