#include<stdio.h>

int main()
{
    int num1 = 10, num2 = 3;

    int sum = num1 + num2;
    printf("Summation = %d\n", sum);

    int sub = num1 - num2;
    printf("Subtraction = %d\n", sub);

    int mul = num1 * num2;
    printf("Multiplication = %d\n", mul);

    float div = num1 / num2;
    printf("Division = %.2f\n", div);

    return 0;
}