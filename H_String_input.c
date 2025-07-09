#include<stdio.h>
#include<string.h>

int main()
{
    char name[50];
    printf("Enter your name : ");

    fgets(name, 50, stdin); //input : space soho scanf function input nite pare na. fgets() hocche scanf er alternate.
    
    printf("Hello %sWelcome to String Chapter", name);
}