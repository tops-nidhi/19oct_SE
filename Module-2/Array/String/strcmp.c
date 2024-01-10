#include<stdio.h>
#include<string.h>
int main()
{
    char str1[20], str2[20];
    int cmp;
    printf("Enter the first string: ");
    scanf("%s", &str1);
    printf("Enter the second string: ");
    scanf("%s", &str2);
    cmp = strcmp(str1, str2);
    // printf("\nMAx string is: %d", cmp);
    if(cmp < 0)
        printf("String 2 is max.");
    else if(cmp == 0 )
        printf("Both are equal.");
    else    
        printf("1st string is max.");
    return 0;
}