#include <stdio.h>

int main() 
{
    char X;
    scanf(" %c", &X);  // The space before %c helps ignore any leftover newline

    // Check if X is lowercase
    if (X >= 'a' && X <= 'z') 
    {
        X = X - 32;  // Convert to uppercase
    } 
    // Check if X is uppercase
    else if (X >= 'A' && X <= 'Z') 
    {
        X = X + 32;  // Convert to lowercase
    }

    printf("%c\n", X);

    return 0;
}
