#include<stdio.h>
#include<string.h>

int main()
{
    char str1[101], str2[101];
    scanf("%s %s", &str1, &str2);

    int value = strcmp(str1, str2);

    if(value<0)
    {
        printf("String one is smaller");
    }
    else if(value==0)
    {
        printf("Equal");
    }
    else if(value>0)
    {
        printf("String two is smaller");
    }
}