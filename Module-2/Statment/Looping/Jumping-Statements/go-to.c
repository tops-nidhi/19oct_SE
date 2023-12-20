#include<stdio.h>
int main()
{
    int i;
    for(i = 0; i < 10; i++)
    {
        if(i == 50)
        {
            goto that;
        }
        printf("%d\n", i);
    }
    printf("\nLoop is end.");
    that:
    printf("\nThis is label");
    return 0;
}