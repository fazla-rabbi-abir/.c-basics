#include<stdio.h>

int main()
{
    int num;
    scanf("%d", &num);

    for(int i=1; i<=num; i+=2)
    {
        printf("%d\n", i);
    }

    return 0;
}