// Pointer is use to store the address of the other variable
#include<stdio.h>
int main(){
    int a = 53;
    int *ptr;
    ptr = &a;
    printf("\nAddress of the a is: %d", ptr);
    printf("\nValue of the a is: %d", *ptr);
    *ptr = 34;
    printf("\nAfter change value of the a is: %d", a);
    printf("\nAddress of the a is: %d", ptr);
    return 0;
}