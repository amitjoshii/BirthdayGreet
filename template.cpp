using namespace std;
#include<iostream>
template <class T1,class P1> 
class Test
{
	T1 a;
	P1 b;
	
	
	public:
		Test(T1 x,P1 y)
		{
			a=x;
			b=y;
		}
		void show()
		{
			cout<<"a="<<a<<endl;
			cout<<"b="<<b<<endl;
            cout<<a+b<<endl;
		}
};
int main()
{
	Test<int,float> t1(10,5.5);
	Test<char,int> t2('p',0);
	Test<char,int>  t2('p',0);
	t1.show();
 	t2.show();
	return 0;
}
