//Program to find greatest of two number which are data members of two different classes using friend function in two class.

#include<iostream>

using namespace std;

class first;
class second;

class first
{
	int a;
	
	
	
	public : friend void max(first, second);
	
};

class second 
{
	int b;
	
	public : friend void max(first, second);
	
};

void max(first f, second s)
{
	cout<<"Enter two number : ";
	cin>>f.a>>s.b;
	
	if(f.a > s.b)
		cout<<f.a<<" is greater.";
	else
		cout<<s.b<<" is greater.";
}

int main()
{
	first f;
	second s;
	max(f,s);
	return 0;
}
