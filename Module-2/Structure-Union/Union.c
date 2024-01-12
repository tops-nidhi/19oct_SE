#include<stdio.h>
union Demo //create the union
{
    // declare data member
    int no;
    char nm[20];
}obj; //Object creation

int main()
{
    // union Demo d1; //Object creation
    printf("Enter the student id: ");
    scanf("%d", &obj.no);
    printf("Enter the student's name: ");
    scanf("%s", &obj.nm);
    printf("\n----------------------%s------------------\n", obj.nm);
    printf("\nYour id is: %d", obj.no);
    return 0;
}