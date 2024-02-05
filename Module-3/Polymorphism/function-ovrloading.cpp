#include <iostream>
using namespace std;
class Overloading
{
public:
    inline int calc(int num1, int num2) { return num1 + num2; }
    inline int calc(int num1, int num2, int num3) { return num1 + num2 + num3; }
};
int main()
{
    Overloading over;
    cout << endl
         << over.calc(56, 4);
    cout << endl
         << over.calc(56, 4, 5);
    return 0;
}