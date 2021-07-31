#include<iostream>
using namespace std;
void sq(int n);
int main()
{int n;
cout<<"enter the number ";
cin>>n;
	sq(n);
	return 0;
}
void sq(int n)
{
	int sq=0;
	//cout<<"Enter the number :";
	//cin>>n;
	sq=n*n;
	cout<<"The squar of a number is :"<<sq;
	
}
