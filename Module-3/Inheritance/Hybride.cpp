#include <iostream>
using namespace std;
class A
{
public:
    A() { cout << "This is class A." << endl; }
};
class B : public virtual A
{
public:
    B() { cout << "This is child B." << endl; }
};
class C : public virtual A
{
public:
    C() { cout << "This is class C." << endl; }
};
class D : public B, public C
{
public:
    D() { cout << "This is class D." << endl; }
};
int main()
{
    D d1;

    return 0;
}