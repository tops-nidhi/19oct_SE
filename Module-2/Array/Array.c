#include <stdio.h>
int main()
{
    int i, m;
    printf("enter size of array");
    scanf("%d", &m);
    int j[m];
    for (i = 0; i < m; i++)
    {
        printf("enter values");
        scanf("%d", &j[i]);
    }
    for (i = 0; i < m; i++)
    {
        printf("%d\n", j[i]);
    }
}