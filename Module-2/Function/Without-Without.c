#include <stdio.h>
int no;
void get()
{
    printf("Enter the value of the no: ");
    scanf("%d", &no);
}
void show()
{
    printf("\nValue of the no is: %d", no);
}
int main()
{
    // Call the UDF function
    get();
    show();
    return 0;
}