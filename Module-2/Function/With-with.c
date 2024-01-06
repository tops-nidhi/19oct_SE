// call by reference
#include<stdio.h>
int demo(int *a){
    return *a;
}
int main()
{
    int no = 100;
    printf("%d", demo(&no));
    return 0;
}