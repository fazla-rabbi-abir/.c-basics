#include <stdio.h>
 
int main() 
{
    int n;
    scanf("%d", &n);
 
    int arr[n], reverse[n];
 
    for (int i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }
 
    for (int i = 0; i < n; i++) 
    {
        reverse[i] = arr[n - 1 - i];
    }
 
    int isPalindrome = 1; // 1 = true, 0 = false
    for (int i = 0; i < n; i++) 
    {
        if (arr[i] != reverse[i]) 
        {
            isPalindrome = 0;
            break;
        }
    }
 
    if (isPalindrome) 
    {
        printf("Palindrome\n");
    } 
    else 
    {
        printf("Not Palindrome\n");
    }
    return 0;
}
 