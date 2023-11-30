// WAP to swap the two value using third variable
#include<stdio.h>
int main(){
    int x, y;
    printf("Enter the value of x and y: ");
    scanf("%d%d", &x, &y);
    int temp;
    temp = y;
    y = x;
    x = temp;
    printf("After swapping values are x = %d and y = %d", x, y);
    return 0;
}