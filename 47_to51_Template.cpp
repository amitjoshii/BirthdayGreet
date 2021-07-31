// 47.Program of template class with one type i.e. T.

/* 
#include<iostream>
using namespace std;
template <class T>
class sum{
    public:
    T n1;
    T n2;

    T add(T x,T y )
    {
        n1 =x;
        n2 =y;
        T a = n1+n2;
        return a;
    }
};
int main()
{
    sum <float> s;
    float a= s.add(5.2,6.3);
    cout<<"Value of a ="<<a<<endl;

    sum <int> s1;
    int  b= s1.add(5,6);
    cout<<"Value of a ="<<b<<endl;
    return 0;
} 
*/


// Templates with Multiple Parameter
//48.Program of template class with two types(with multiple arguments).

/*
#include<iostream>
using namespace std;
template<class T,class T2>
class mulTemp
{
    public:
     mulTemp(T a,T2 b)
    {
        x=a;
         y=b;

    }
    void display()
    {
        cout<<"Entre two number = "<<this->x<<this->y<<endl;
    }
};
int main()
{
    mulTemp<int ,char> m1(2,'a');
    m1.display();
    return 0;
}
*/


/*49.Program of template function to find maximum of the two elements.
#include<iostream>
using namespace std;
template<class T1, class T2>
class big
{
    public:
    void display(T1 x,T2 y)
    {
        if(x > y)
        {
            cout<<"X is Greater!";
        }
        else
        {
            cout<<"Y is Greater!";
        }
    }
};
int main()
{
    big <int , int > g;
    int a,b;
    cout<<"Entre any Two Number "<<endl;
    cout<<"Enter X =";
    cin>>a;
    cout<<"Enter Y = ";
    cin>>b;
    g . display(a,b);
    return 0;
}
*/



// Take Two Number From User
//50.Program to swap two numbers using template function.
/*
#include<iostream>
#include<stdio.h>
using namespace std;
template<class T>

   void  swapping(T &a, T &b)
    {
        T temp;
        temp = a;
        a = b;
        b = temp;
    }
int main()
{

    int a,b;
    cout<<"Entre any Two Number = ";
    cin>>a>>b;

    cout<<"Number Befor Swapping A ="<<a<<endl;
    cout<<"Number Befor Swapping B ="<<b<<endl;

    swapping(a,b);

    cout<<"Number After Swapping A ="<<a<<endl;
    cout<<"Number After Swapping B ="<<b<<endl;

    return 0;
} */



/*#include<iostream>
using namespace std;

template <class T1 ,class T2>

class swapping{
    public:
    T2 temp;
void Swap(T1 &x, T2 &y) {

    temp = x;
    x = y;
    y = temp;
}
};
int main() {
    swapping <int , int > s;

    int x, y;

    cout << "Enter two numbers:";
    cin >> x>>y;

    cout << "Before Swap:";

    cout << "\nx value is:" << x;
    cout << "\ny value is:" << y;

    s.Swap(x, y);

    cout << "\n\nAfter Function Templates:\n";

    cout << "\n x value is:" << x;
    cout << "\n y value is:" << y;

    return 0;
}
*/


//51.Program to add two elements using template class.

#include<iostream>
using namespace std;
template<class T>
class num{
    public:
   void add(T a, T b)
   {
        T m = a;
        T n = b;
       cout<<""<<m+n<<endl;
   }
};
int main()
{  
    num <int> t;
    t.add(2,3);
    num <string> t1;
    t1.add("Amit","Joshi");

    return 0;
}

/* using namespace std;
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
} */





 /* #include<iostream>
 using namespace std;
 template<class T>
 class multi{
    public:
    T mul()
    {
        T x,y;
        cout<<"Enter 1st Number =";
        cin>>x;
        cout<<"Enter 2nd Number =";
        cin>>y;
        T a=x*y;
        return a;
    }
 };
 int main()
 {
    multi <int> m;
    int a= m.mul();
    cout<<a<<endl;

    multi <float> m1;
    float b = m1.mul();
    cout<< b<<endl;
    return 0;

 } */


 // Swapping of Two Number = using template
 // Defaul Argument..

/* #include<iostream>
#include<stdio.h>
using namespace std;
template<class T>
class Swap{
    public:
    void swapping(T x,T y)
    {
        //int m,n;
        x = x+y;
        y = x-y;
        x = x-y;

        cout<<"Value of A ="<<x;
        cout<<"Value of B ="<<y;
    }
};
int main()
{
    Swap<float>s;
    s.swapping(6,3);
   // s.display();
    return 0;
} */

