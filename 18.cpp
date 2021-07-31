//Program to swap two numbers without using temp variable by following variables.


#include<iostream>
using namespace std;

//Call by value

void swap1(int a, int b)
{
	a = a+b;
	b = a-b;
	a = a-b;
	cout<<"A = "<<a<<"\tB = "<<b<<endl;
	
}




//Call by reference

void swap2(int &c, int &d)
{
	c = c+d;
	d = c-d;
	c = c-d;
	
}

//Call by address 

void swap3(int *a, int *b)
{
	*a = *a+*b;
	*b = *a-*b;
	*a = *a-*b;
	cout<<"A = "<<*a<<"\tB = "<<*b<<endl;
	
}

int main()
{
	int a, b;
	
	cout<<"\nEnter the value of A and B : ";
	cin>>a>>b;
	
	cout<<"\nSwapping by Call by Value : \n";
	swap1(a,b);
	
	cout<<"\nSwapping by Call by Reference : \n";
	swap2(a,b);
	cout<<"A = "<<a<<"\tB = "<<b;
	
	cout<<"\nSwapping by Call by Address : \n";
	swap3(&a,&b);
	
	return 0;
}