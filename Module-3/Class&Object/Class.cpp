#include<iostream>
using namespace std;
class Student
{
private:
    int no;
    string nm;

public:

    int getdata()
    {
        cout<<"Enter your roll no: ";
        cin>>no;
        cout<<"Enter your name";
        cin>>nm;
        return 0;
    }
    int showdata()
    {
        cout<<endl<<"------------------"<<nm<<"---------------"<<endl;
        cout<<"Your no is: "<< no;
        return 0;
    }
};
    // create object
// }std;
int main()
{
    // create object
    Student std;
    std.getdata();
    std.showdata();
    return 0;
}