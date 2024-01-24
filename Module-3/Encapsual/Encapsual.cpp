#include<iostream>
using namespace std;
class Capsual
{
    int salary;
    string name;
public:
    Capsual(int salary, string name)
    {
        this->salary = salary;
        this->name = name;
    }
    void print()
    {
        cout<<name<<"'s salary is: "<<salary;
    }
};
int main()
{
    Capsual cap(78, "Vinay");
    cap.print();
    return 0;
}