#include <iostream>
using namespace std;
class A
{
public:
    int no;
    void data()
    {
        int no = 35;
        this->no = no;
        cout << "This is class A." << endl;
    }
};
class B : public A
{
public:
    void b() { cout << "This is child class B."<<++no<< endl; }
};
class C : public A
{
public:
    void c() { cout << "This is child class C."<<++no << endl; }
}; 
int main()
{
    B b1;
    C c1;
    cout << "Calling Class B's member function:" << endl;
    b1.data();
    b1.b();
    c1.data();
    c1.c();
    return 0;
}