#include <iostream>
using namespace std;
class Overriding
{
public:
    float div(float num1, float num2)
    {
        if (num2 != 0)
            return num1 / num2;
        else
            return 0.0;
    }
};
class Demo
{
public:
    float div(float num1, float num2)
    {
        return (num2 / num1);
    }
};
int main()
{
    Overriding over;
    Demo dm;
    cout << endl
         << over.div(23, 5);
    cout << endl
         << dm.div(2, 56);
    return 0;
}