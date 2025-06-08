#include <stdio.h>

int main()
{
    //variable declare & intial(dynamic)
    int num1 = 10, num2 = 23.50621; //int = data-type, num1 = variable name, 20 = variable
    float num3 = 10.2;
    long long int num4 = 10.1234567;
    char ch = 'a';

    //variable print
    printf("Integer number = %d \n", num1); // '%d' = format specifier
    printf("Float number = %.3f \n", num2);
    printf("Float number = %f \n", num3);
    printf("Double number = %lld \n", num4);
    printf("Character number = %c", ch);

    return 0;

}