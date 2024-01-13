#include <stdio.h>
struct Demo // create the structure
{
    // declare data member
    int no;
    char nm[20];
} /*obj*/; // Object creation

int main()
{
    struct Demo obj[5]; // Object creation
    for (int i = 0; i < 5; i++)
    {
        printf("Enter the student id: ");
        scanf("%d", &obj[i].no);
        printf("Enter the student's name: ");
        scanf("%s", &obj[i].nm);
    }
    for (int i = 0; i < 5; i++)
    {
        printf("\n----------------------%s------------------\n", obj[i].nm);
        printf("\nYour id is: %d", obj[i].no);
    }
    return 0;
}