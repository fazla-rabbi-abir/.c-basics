#include<stdio.h>

int main()
{
    int num;
    scanf("%d", &num);

    for(int i=num; i>=1; i--)
    {
        printf("%d\n", i);
    }

    return 0;
}