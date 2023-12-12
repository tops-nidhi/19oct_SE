// Switch case is use to take the multiple from the user
#include <stdio.h>
int main()
{
    int no1, no2;
    printf("Enter the two no: ");
    scanf("%d%d", &no1, &no2);
    int choice;
    printf("\n1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        printf("\nAddition = %d", no1 + no2);
        break;
    case 2:
        printf("\nSubtraction = %d", no1 - no2);
        break;
    case 3:
        printf("\nMultiplication = %d", no1 * no2);
        break;
    case 4:
        printf("\nDivision = %d", no1 / no2);
        break;
    default:
        printf("\nChoice is invalid!");
        break;
    }
    return 0;
}