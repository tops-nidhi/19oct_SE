#include <iostream>
using namespace std;

class A
{
public:
    string name;
    void nam()
    {
        cout << "enter name";
        cin >> name;
    }
};
class B
{
public:
    int age;
    void ag()
    {
        cout << "enter age";
        cin >> age;
    }
};
class C
{
public:
    int salary;
    void sal()
    {
        cout << "Enter person's salary: ";
        cin >> salary;
    }
};
class D : public A, public B, public C
{
public:
    void dis()
    {
        cout << name << "'s age is: " << age << ", salary is: " << salary;
    }
};
int main()
{
    D d1;
    d1.nam();
    d1.ag();
    d1.sal();
    d1.dis();
    return 0;
}