/* 20.Program to create a class student and take student information by using member function and defining 
   it outside the class.//getinfo() and putinfo(). */
 // Access private data outside of the class 
#include<iostream>
using namespace std;

class student{
    private:   // Here we declare Data - Member / Attribute Private No one can access it outside the class.....
    int roll;
    string name;
    string sec;
    public:
    void getinfo(int r,string n ,string s)
    {
        roll=r;
        name=n;
        sec=s;
    }
    
    void putinfo()
    {
        cout<<roll<<endl;
        cout<<name<<endl;
        cout<<sec<<endl;
    }
};
int main()
{
    student e;
    string b,a;int r;
    cout<<"Entre Roll Number :";
    cin>>r;
    cout<<"Entre Name :";
    cin>>a;
    cout<<"Entre Section ";
    cin>>b;
    e.getnfo(r,a,b);
    e.putinfo();
    return 0;
} 