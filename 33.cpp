//33.Write a C++ program to demonstrate example of constructor overloading.
// When We are defined more or more constructur 
 #include<iostream>
using namespace std;
class oper
{
    private:
    string name;
    int age;
    string occ;

    public:
    oper(string n,int a,string o)
    {
        name=n;
        age=a;
        occ=o;
    }

    oper()
    {
        cout<<"I am a default constructor "<<endl;
    }

    oper(oper &o1)
    {
         name = o1.name;
         age  = o1.age;
         occ  = o1.occ;
    }
    void display()
    {
        cout<<name<<endl;
        cout<<age<<endl;
        cout<<occ<<endl;
    }
   
    bool operator == (oper &o1)
    {
        if(name==o1.name && age == o1.age && occ==o1.occ)
        {
            return true;
        }
            return false;
    }
     ~oper()
    {
        cout<<"Destructor Called!"<<endl;
    }
};
int main()
{
    oper o1("Amit",23,"Student");
   // oper();
    oper o2 = o1;
    o1.display();
    o2.display();

if(o2 == o1)
{
    cout<<" Same !"<<endl;
}
else{
    cout<<" Not Same !"<<endl;
}
return 0;
} 