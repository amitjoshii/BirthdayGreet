//Implementation of const member function.

#include<iostream>

using namespace std;

class Myclass
{
	int a;
	
	public : Myclass()
			 {
			 	a = 20;
			 }
			 
			 int getData() const
		   	 {
				return a;	
			 }
};

int main()
{
	Myclass obj;
	
	cout<<"a = "<<obj.getData();
	
	return 0;
	
}
