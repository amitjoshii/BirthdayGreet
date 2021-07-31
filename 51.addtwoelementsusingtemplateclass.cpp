//51.Program to add two elements using template class.

#include<iostream>
using namespace std;
template<class T>
T add(T a,T b)
{
	return a+b;
	
}
int main()
{
	cout<<add<int>(2,3)<<endl;
	cout<<add<float>(2.17,1.15);
	return 0;
}
