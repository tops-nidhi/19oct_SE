#include<string.h>
#include<stdio.h>
int main()
{
    char str1[50];
    char str2[50];
    printf("Enter the original string: ");
    scanf("%s", &str1);
    strcpy(str2, str1);
    printf("copied string is: %s", str2);
    return 0;
}