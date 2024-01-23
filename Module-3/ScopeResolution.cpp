#include<iostream>
using namespace std;
int no = 90;
int main()
{
    int no = 100;
    cout<<"Value of the local variable no is: "<< no<< endl;
    cout<<"Value of the Global variable no is: "<< ::no;
    return 0;
}