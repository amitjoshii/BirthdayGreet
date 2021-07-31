#include<iostream>
using namespace std;
int main()
{
	int x=10;
	int  &a=x;
	a=a+1;
	cout<<x<<endl;
	cout<<a<<endl;
	return 0;
	
}
