#include<stdio.h>

void rec(int i)
{
    if(i == 0)
    {
        return;
    }
    printf("%d\n", i);

    rec(i-1);
}
int main()
{
    int i= 10;
    rec(i);

    return 0;
}