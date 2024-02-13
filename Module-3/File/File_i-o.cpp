#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    string str = "Hello";
    string str2;
    // Creating the  object to write inside the file
    ofstream out;
    // Use to open the file and if file wasn't created then first create the file and then open the file
    out.open("temp.txt");
    // out<<"Hello";
    out<< str;
    out.close();
    ifstream in("temp.txt");
    in>> str2;
    cout<< str2;
    in.close();
    return 0;
}