#include<stdio.h>

int main()
{
    int num1, num2;
    scanf("%d %d", &num1, &num2);

    if(num1%num2==0 || num2%num1==0)
    {
        printf("Yes\n");
    }
    else
    {
        printf("No\n");
    }
}