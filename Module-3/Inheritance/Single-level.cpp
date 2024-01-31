#include<iostream>
using namespace std;
class Base{
public:
    int no;
    void get()
    {
        cout<<"Enter the value of the no: ";
        cin>>no;
    }
};
class Derived : public Base{
public:
    inline int show(){return no;}
};
int main()
{
    Derived d1;
    d1.get();
    cout<<"The number is "<<d1.show()<<endl;
    return 0;
}