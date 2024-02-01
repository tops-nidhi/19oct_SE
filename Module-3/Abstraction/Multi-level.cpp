#include<iostream>
using namespace std;

class GrandParent
{
public:
    int noh;
    GrandParent(int noh = 35) : noh(noh){
    }
};
class Parent : public GrandParent {
public:
    int bal;
    Parent(int noh, int bal) : GrandParent(noh) , bal(bal){
    }
};
class Child: public Parent{
public:
    string name; //additional data member for child
    Child(int noh, int bal, string name) :  Parent(noh, bal), name(name){
        cout << "Constructing a grandparent with number of house " << noh << endl;
        cout << "Constructing a parent with " << noh << " number of house and " << bal << " bank balance" << endl;
        cout << "Constructing a child named "<< name <<" with "<<noh<<"number of house and "<<bal<<" total bank balance."<<endl;    
    }
};
int main()
{
    /*GrandParent gp1(20);
    cout << "Number of hands of the first grand parent is " << gp1.noh << endl;*/
    Child c1(40, 68000, "John");
    return 0;
}