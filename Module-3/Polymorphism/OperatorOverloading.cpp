#include <iostream>
using namespace std;
class Operator
{
public:
    int num;
    int set()
    {
        cout << "Enter the value of the number: ";
        cin >> num;
        return 0;
    }
    Operator operator ++(){
        ++num;
    }
    void print() { cout << "Value of the number is: " << num; }
};
int main()
{
    Operator op;
    op.set();
    ++op;
    op.print();
}