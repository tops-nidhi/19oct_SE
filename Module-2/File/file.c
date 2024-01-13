#include<stdio.h>
int main()
{
    FILE *fptr;
    char data[20];
    printf("Enter your msg: ");
    scanf("%s", &data);
    char str[20];
    fptr = fopen("hello.txt", "a");
    fprintf(fptr, "%s", data);
    fclose(fptr);
    fptr = fopen("hello.txt", "r");
    fscanf(fptr, "%s", &str);
    printf("%s", str);
    return 0;
}