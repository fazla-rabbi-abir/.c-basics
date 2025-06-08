#include <stdio.h>

int main()
{
    int num1, num2, sum;
    printf("Enter two integer number : ");
    scanf("%d %d", &num1, &num2); //scanf = console input function(user input)

    sum = num1 + num2;
    printf("\nSummation of numbers = %d", sum);

    return 0;
}