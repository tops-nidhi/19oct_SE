// Recursion mean function call it self
#include<stdio.h>
int data(int n)
{
    if(n > 10)
    {
        return 0;
    }
    return n+data(n+2);
}
int main()
{
    printf("%d", data(0));
    return 0;
}