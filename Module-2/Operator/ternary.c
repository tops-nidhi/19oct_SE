// WAP to find the max no among two numbers without using if-else.
// (condition) ? (true) : (false)
#include<stdio.h>
int main()
{
    int x, y;
    printf("Enter two numbers: ");
    scanf("%d%d", &x, &y);
    (x > y) ? (printf("X is max.")) : (printf("Y is max."));
    return 0;
}