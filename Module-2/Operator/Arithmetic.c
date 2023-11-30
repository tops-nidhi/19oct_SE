// WAP to make an addition, subtraction, multiplication, division, and modulo of two numbers
#include<stdio.h>
int main()
{
    int a, b;
    char x = 'a' , y = 'b';
    int sub;
    float ans;
    printf("Enter the value of a and b: ");
    scanf("%d%d", &a, &b);
    printf("\nAddition= %d", x+y);
    sub = a - b;
    printf("\nSubtraction= %d", sub);
    printf("\nMultiplication= %d", a*b);
    ans = (float)a / (float)b;
    printf("\nDivision = %.2f", ans);
    printf("\nModulo = %d", a%b);
    a++; //a = a + 1 -> a = 10 + 1 -> a = 11
    printf("\nAfter Increment of a is: %d", a);
    --b;
    printf("\nAfter decrement value of b is: %d", b);
}