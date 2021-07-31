#include<iostream>
using namespace std;
int sq();
int main()
{
	sq();
	return 0;
}
int sq()
{
	int n,sq=0;
	cout<<"Enter the number :";
	cin>>n;
	sq=n*n;
	cout<<"The square of a number is :"<<sq;
}
