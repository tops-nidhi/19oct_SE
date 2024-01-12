#include<stdio.h>
struct Demo //create the structure
{
    // declare data member
    int no;
    char nm[20];
}obj; //Object creation

int main()
{
    // strcut Demo d1; //Object creation
    printf("Enter the student id: ");
    scanf("%d", &obj.no);
    printf("Enter the student's name: ");
    scanf("%s", &obj.nm);
    printf("\n----------------------%s------------------\n", obj.nm);
    printf("\nYour id is: %d", obj.no);
    return 0;
}