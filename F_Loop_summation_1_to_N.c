#include<stdio.h>

int main()
{
    int num;
    scanf("%d", &num);

    int sum = 0;
    for(int i=0; i<=num; i++)
    {
        sum = sum + i;
    }
    printf("%d", sum);

    return 0;
}