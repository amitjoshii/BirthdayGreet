//38.Program which implement concept of Multilevel Inheritance.
// Ismai hota  ye hai ki jo base class hai vo derived hogi child class 
//mai repeat hoga some exaples are as follow.
#include<iostream>
using namespace std;
class Base1
{
    protected:
    string name;
    string Occupation;
    long long num;
};
class Base2 : public Base1
{
    public:
    void enter()
    {
        cout<<"Entre Name :";
        cin>>name;
        cout<<"Entre Occupation :";
        cin>>Occupation;
        cout<<"Entre Number :";
        cin>>num;
    }
};
class Base3 :public Base2
{
    public:
    void display()
    {
        cout<<"Name is :"<<name<<endl;
        cout<<""<<Occupation<<endl;
        cout<<""<<num<<endl;
    }
};
int main()
{
    Base3 b;
    b.enter();
    b.display();
    return 0;
} 