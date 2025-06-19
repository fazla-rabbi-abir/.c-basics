#include<stdio.h>

int main()
{
    int num;
    scanf("%d", &num);

    if(num > 0)
    {
        printf("This is positive number.");
    }
    else if(num < 0)
    {
        printf("This is negetive number.");
    }
    else
    {
        printf("Zero.");
    }
}
