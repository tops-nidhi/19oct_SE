#include<iostream>
using namespace std;
class This{
public:
    int no = 90;    
    int show()
    {
        int no = 100;
        cout<<"Value of the data member is: "<<no<< endl;
        cout<<"Value of the local variable is: "<<no;
        return no;
    }
};
int main()
{
    This t1;
    t1.show();
    return 0;
}