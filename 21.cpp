//21.Program which implements calling of private member fucntion via public member function.
#include<iostream>
using namespace std;

class student{
    private:
     string name;
    public:
    int age;
    string occupation;
    void display()
    {
        cout<<name<<endl;
        cout<<age<<endl;
        cout<<occupation<<endl;
    }
    
    void Ename(string s){
        name = s;

    }

};
int main()
{
    student arr[3];
    string s;
     for(int i=0;i<3;i++)
        {
            cout<<"Entre Your Name :";
            cin>>s;
            arr[i].Ename(s);
            cout<<"Entre Your Age :";
            cin>>arr[i].age;
            cout<<"Entre Your Occupation :";
            cin>>arr[i].occupation;
        }
    
    for(int i=0;i<3;i++)
    {
        arr[i].display ();
    }


return 0;
}
