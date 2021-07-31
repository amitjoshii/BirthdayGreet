// All Programs Are in Operator Overloading File
#include<stdio.h>
#include<conio.h>
#include<iostream>
using namespace std;
class complex
{
    private:
    int a,b;
    public:
    void comp(int x,int y)
    {
        a=x;
        b=y;
    }
    void display()
    {
        cout<<"value of A = "<<a<<endl<<" B = "<<b;
    }
    complex operator+(complex c)      // is tarah se function bana skte hai operator ke aage operator likh ke..
    {                                 // + ka meaning already tha humne ek aur definition bana di..
        complex temp;                 // + ki 2 defintion hai to isko operator overloading bolenge..
        temp.a=a+c.a;
        temp.b=b+c.b;
        return(temp);
    }
};
int main()
{
    complex c1,c2,c3,c4;
    c1.comp(5,6);
    c2.comp(8,9);
    c3=c1.operator+(c2);    // Is tarah se function ko call kr skte hai..
    //c3=c1+c2;             // Is tarah se bhi funtion ko call kr skte hai..
    c3.display();

   return 0;
 }