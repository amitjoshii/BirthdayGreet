#include<iostream>
using namespace std;
int sq(int n);
int main()
{
	int n;
	cout<<"Enter the number :";
	cin>>n;
	sq(n);
	return 0;
	
}
int sq(int n)
{
	int sq=0;
	sq=n*n;
	cout<<"The square of a number is:"<<sq;
}
