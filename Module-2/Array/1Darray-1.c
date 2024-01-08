#include<stdio.h>
int setdata(int no[5]){
    return no[2];
}
int main()
{
    int n[5] = {56,89,23,14,3};
    printf("%d", setdata(n));
    return 0;
}