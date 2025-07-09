#include <stdio.h>
#include <ctype.h> 
 
int main() 
{
    char S[100005]; 
    scanf("%s", S);
    
    for (int i = 0; S[i] != '\0'; i++) 
    {
        
        if (isupper(S[i])) 
        {
            printf("%c", tolower(S[i]));
        }
        else if (islower(S[i])) 
        {
            printf("%c", toupper(S[i]));
        }
        else 
        {
            printf("%c", S[i]);
        }
    }
 
    printf("\n"); 
    return 0;
}