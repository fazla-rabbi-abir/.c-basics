#include <stdio.h>

int main() 
{
    int index;
    scanf("%d", &index); 

    int A[index];

    for (int i=0; i<index; i++) 
    {
        scanf("%d", &A[i]);
    }

    int is_palindrome = 1; // Assume it's a palindrome

    for (int i=0; i<index/2; i++) 
    {
        if (A[i] != A[index-1-i]) 
        {
            is_palindrome = 0;
            break;
        }
    }

    if (is_palindrome) 
    {
        printf("YES\n");
    } 
    else 
    {
        printf("NO\n");
    }

    return 0;
}
