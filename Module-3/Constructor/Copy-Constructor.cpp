#include<iostream>
using namespace std;
class Copy{
public:
int no;
    Copy(int no)
    {
        this->no = no;
    }
    Copy(Copy &obj)
    {
        cout<<"Value of the no is: " <<obj.no;
    }
};
int main()
{
    Copy cpy1(45);
    Copy cpy2 = cpy1;
    return 0;
}