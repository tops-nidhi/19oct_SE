#include<iostream>
using namespace std;
class Operator{
public: 
    int num;
    int set()
    {
        cout << "Enter the value of the number: ";
        cin >> num;
        return 0;
    }
    Operator operator +(Operator &obj2){
        Operator obj3;
        obj3.num = num+ obj2.num;
        return obj3;
    }
    void print() { cout << "Value of the number is: " << num; }
};
int main()
{
    Operator opt1, opt2, opt3;
    opt1.set();
    opt2.set();
    opt3 = opt1 + opt2;
    opt3.print();
    return 0;
}