// Call by value
#include<stdio.h>
void data(int no)
{
    printf("Value of the no is: %d", no);
}
int main()
{
    int no;
    printf("Enter the value of the n: ");
    scanf("%d", &no);
    data(no);
    return 0;
}