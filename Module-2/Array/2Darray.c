#include<stdio.h>
int  main()
{
    int no[3][2];
    int i, j;
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 2; j ++)
        {
            printf("Enter the value:");
            scanf("%d", &no[i][j]);
        }
    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("Value of the no[%d][%d]: %d.\n", i, j, no[i][j]);
        }
        
    }
    
    return 0;
}