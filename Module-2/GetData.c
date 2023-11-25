// WAP to print the value using variable
#include<stdio.h>
void main()
{
    // Local variable
    int num = 98;     //static(compile time) value
    int num2;
    printf("Enter the number: ");
    scanf("%d", &num);
    printf("Enter the number: ");
    scanf("%d", &num2); 


    printf("Value of the no is: %d", num);
}