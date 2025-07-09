#include <stdio.h>
#include <string.h>

int main() 
{
    char str1[50] = "OpenAI";
    char str2[50] = " GPT";  // Make sure it's large enough

    strcpy(str1, str2);

    // Print the copied string
    printf("Copied String: %s\n", str1);

    return 0;
}
