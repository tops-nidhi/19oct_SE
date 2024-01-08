#include<stdio.h>

int main()
{
    // char nm[50] = {'k', 'h','u','s','h'};
    // char nm[50] = {"khush"};
    // char nm[] = {"khush"};
    char nm[50];

    printf("Enter your name: ");
    // scanf("%s", &nm);
    gets(nm);
    // printf("Your name is: %s", nm);
    puts(nm);
    return 0;
}