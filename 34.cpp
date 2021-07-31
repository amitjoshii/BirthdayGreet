//32.Write a C++ program to demonstrate example of copy constructor.
//34.Write a program for destructor.

#include<conio.h>
#include<iostream>
using namespace std;
class amit
{
    private:
    int a,b;
    public:
    
    {
        a=x;
        b=y;amit(int x,int y)
        cout<<"Value of A= "<<a<<" and B= "<<b<<endl;
    }
    amit(amit &m)
    {
        a=m.a;
        b=m.b;
        cout<<"Copy COnstructure Value of A= "<<a<<" B = "<<b;
    }
};
int main()
{
    amit a1(20,40);
    amit a2= a1;
    return 0;
}