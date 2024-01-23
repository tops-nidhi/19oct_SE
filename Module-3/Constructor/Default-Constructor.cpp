#include<iostream>
using namespace std;
class Construct
{
public:
// default constructor
    Construct()
    {
        cout<<"This is default constructor.";
    }
};
int main()
{
    Construct con;
    return 0;
}