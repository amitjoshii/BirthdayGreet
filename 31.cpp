//31.Write a C++ program to demonstrate example of parameterized constructor.
#include<conio.h>
#include<iostream>
using namespace std;
class employee
{
    private:
    int id;
    string name;
    long long int phone_no ;
    public:
    employee (int i,string n,long long int p)
    {
        id=i;
        name=n;
        phone_no=p;
    }
    void display()
    {
        cout<<"employee detail \n"<<id<<endl<<name<<endl<<phone_no<<endl;
    }
};
int main()
{
    employee e1=employee(101,"AMIT",8109172039);
    employee e2=employee(102,"AMAN",8109172039);
    e1.display();
    e2.display();
    return 0;
}