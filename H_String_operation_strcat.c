#include <stdio.h>
#include <string.h>

int main() 
{
    char str1[100] = "Hello, ";
    char str2[100] = "world!";

    // Concatenate str2 to str1
    strcat(str1, str2);

    // Output the result
    printf("Concatenated String: %s\n", str1);

    return 0;
}
