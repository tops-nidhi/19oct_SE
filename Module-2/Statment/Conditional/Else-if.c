#include <stdio.h>
int main()
{
    int no;
    printf("Enter the value of the no: ");
    scanf("%d", &no);
    if (no == 0)
    {
        printf("%d is neutral no.", no);
    }
    else if (no > 0)
    {
        printf("%d is positive no.");
    }
    else
    {
        printf("%d is negative no.", no);
    }
    return 0;
}