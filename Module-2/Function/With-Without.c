#include<stdio.h>
float no;
float data()
{
    printf("Enter the value of the no: ");
    scanf("%f", &no);
    return 0;
}
float showdata()
{
    return no;
}
int main()
{
    data();
    printf("%f", showdata());
    return 0;
}