#include<stdio.h>
#include<string.h>
int main()
{
    int len;
    char str[50];
    printf("Enter the string: ");
    gets(str);
    len = strlen(str);
    printf("Length of the string is: %d", len);
    return 0;
}