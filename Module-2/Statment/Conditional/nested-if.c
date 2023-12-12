// WAP to check if no is negative, positive or neutral
#include <stdio.h>
int main()
{
    int no;
    printf("Enter the no: ");
    scanf("%d", &no);
    if (no > 0)
    {
        printf("%d is positive no.", no);
    }
    else
    {
        if (no == 0)
        {
            printf("%d is neutral no.", no);
        }
        else
        {
            printf("%d is negative no.", no);
        }
    }
    return 0;
}