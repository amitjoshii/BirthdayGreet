/* 37.Program which implement concept of Single level Inheritance.
   (a)Public derivation of base class//class B:public A
   (b)Private derivation of base class//class B:private A
 */
// Single Level Inheritance ..
/* #include<iostream>
using namespace std;

class A
{
    public:
    int x,y;
    int name(int a,int b)
    {
        x=a;
        y=b;
       return (x,y);
    }
};
class B: public A
{
    public:
    string x,y;
    string sirname(string a,string b)
    {
        x=a;
        y=b;
        return (x,y);
    }

};
int main()
{
    A n;
    B m;
    n.name(10,20);
    m.sirname("Amit","Joshi");
    cout<<n.x<<endl<<n.y<<endl;
    cout<<m.x<<endl<<m.y<<endl;
    return 0;
} */

#include <iostream>
using namespace std;

class A
{
public:
   int x, y;
   int z;
   void Naam()
   {
      cout << " Entre First number :";
      cin >> x;
      cout << "Entre Second Number :";
      cin >> y;
   }
};
class B : private A
{
public:
   void display()
   {
      z = x + y;
      // return z;
      cout << "Value of X + Y = " << z;
   }
};
int main()
{
   B obj;
   A a;
   a.Naam();
   obj.display();
   return 0;
}
