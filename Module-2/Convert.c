// WAP to convert the week into days and days into week
#include<stdio.h>
int main()
{
    int week, days;
    printf("Enter the no of week: ");
    scanf("%d", &week);
    days = week * 7;
    printf("\nNo of days in %d week are %d", week , days);
    return 0;
}