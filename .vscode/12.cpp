#include<iostream>
using namespace std;
union employee
{
	int id;
	float salary;
	char name;
	char designation;
};


int main()
{
	employee e;
	cout<<"enter name";
	cin>>e.name;
	cout<<e.name<<endl;
	cout<<"enter id";
	cin>>e.id;
	cout<<e.id<<endl;
	cout<<"enter salary";
	cin>>e.salary;
	cout<<e.salary<<endl;
	cout<<"enter designation";
	cin>>e.designation;
	cout<<e.designation<<endl;
	return 0;
	
}
