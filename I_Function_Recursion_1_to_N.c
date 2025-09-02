#include<stdio.h>

void rec(int i)
{
    if(i == 10)
    {
        return;
    }
    printf("%d\n", i);

    rec(i+1);
}
int main()
{
    int i=0;
    rec(i);

    return 0;
}