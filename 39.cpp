//39.Write a C++ Program to find Area and Volume using Multiple inheritance.

// ek se jada derived Calas And on;y one base class 
#include<iostream>
using namespace std;
class Area
{
    public:
    int radius;
    int height;
};
class Volume
{
    public:
    int h;
    int r;
};
class Cylinder :public Area, public Volume{
    public:
    void getdata_A()
    {
        cout<<"Enter radius and Height for Area of cylinder ";
        cout<<"Enter radius =";
        cin>>radius;
        cout<<"Enter Height =";
        cin>>height;
        cout<<"Area of Cylinder ="<< 2 * 3.14* radius* height+2* 3.14* radius* 2<<endl ;
    }
    void getdata_V()
    {
        cout<<"Enter radius and Height for Volume of cylinder ";
        cout<<"Enter radius =";
        cin>>r;
        cout<<"Enter Height =";
        cin>>h;
        
        cout<<"Volume of Cylinder"<<3.14* r* 2* h<<endl;
    }
};
int main()
{
    Cylinder obj;
    obj.getdata_A();
    obj.getdata_V();
    return 0;
}