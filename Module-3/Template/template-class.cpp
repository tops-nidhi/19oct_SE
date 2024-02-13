#include <iostream>
using namespace std;
template <typename T>
class Template
{
public:
    Template(T a)
    {
        cout << "The value of the a is: " << a << endl;
    };
};
int main()
{
    Template <int> t1(56);
    Template <float> t2(5.6);
    return 0;
}