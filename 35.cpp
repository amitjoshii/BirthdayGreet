//35.Write a program for construtor with deafult args.
#include<conio.h>
#include<iostream>
using namespace std;
class joshi
{
    private:
    int a,b;
    public:
    joshi()      //This is DEFAULT CONSTRUCTURE NO ARGUMENT IF WE DO J1 AND J2 COMMENT THEN DEFAULT CONSTRUCTURE EXECUTE .
    {
        a=0;
        b=0;
        cout<<"I am Default Constructor "<<endl;
    }
    joshi(int x,int y) // THIS IS PERAMETERISED CONSTRUCTORE TWO PARAMETER/ARGUMENT IS PASSING.
    {
        a=x;
        b=y;
        cout<<"I am Parameterised Constructor  A = "<<a<<" B = "<<b<<endl;
    }
    joshi(joshi &m)// THIS IS COPY CONSTRUCTURE HERE J2 IS COPY IN J3...
    {
        a=m.a;
        b=m.b;
        cout<<"I am copy Constructor  A = "<<a<<" B = "<<b<<endl;
    }
};
int main()
{
    joshi j1;
    joshi j2(10,20);
    joshi j3(j2);
    return 0;
}