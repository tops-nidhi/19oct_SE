#include<iostream>
using namespace std;
class Friend{
    int num;
public: 
    friend int dost(Friend obj, int);
};
int dost(Friend obj, int no){
    obj.num = no;
    cout<<"Value of the num is:"<< obj.num;
    return 0;
};
int main()
{
    Friend frnd;
    dost(frnd, 56);
    return 0;
}