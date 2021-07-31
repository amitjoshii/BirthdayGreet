//5.Program to calculate power of number.
#include<iostream>
using namespace std;
int main()
{
    int x,y,m=1;
    cout<<"Enter Number =";
    cin>>x;
    cout<<"Enter Power =";
    cin>>y;
    for(int i=1; i<=y; i++)
    {
        m = m*x;
       
    }
     cout<<""<<m;
    return 0;
}