#include<iostream>
using namespace std;
class Abstract
{
    int no;
public:
    Abstract(int no = 100)
    {
        this -> no = no;
    }
    int show()
    {
        cout<<"Value of the no is: "<< no;
        return 0;
    }
};
int main()
{
    Abstract abs;
    abs.show();
    return 0;
}