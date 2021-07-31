//30.Write a C++ program to demonstrate example of default constructor.
#include<conio.h>
#include<iostream>
using namespace std;
class school
{
private:
    int a,b;
public:
    school()
    {
        cout<<"Amit \nPadmaja School"<<endl;
    }
};
int main()
{
    school s1,s2,s3;
    return 0;
}