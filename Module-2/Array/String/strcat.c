#include<stdio.h>
#include<string.h>
int main()
{
    char fnm[20], lnm[20];
    printf("Enter your first name: ");
    scanf("%s", &fnm);
    printf("Enter your last name: ");
    scanf("%s", &lnm);
    strcat(fnm, lnm);
    printf("Your full name is: %s", fnm);
}