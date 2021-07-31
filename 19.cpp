#include<iostream>
using namespace std;

class employee{
    private:
    long int emp_id;
    string emp_city;
    string emp_post;
    long long emp_salary;

    public:

    void getdata(long int i,string n,string p,long long s){
        emp_id = i;
        emp_city = n;
        emp_post =p;
        emp_salary =s;

    }


    void display(){
        cout<<emp_id<<endl;
        cout<<emp_city<<endl;
        cout<<emp_post<<endl;
        cout<<emp_salary<<endl;
    }
};
int main(){
    employee e;
    int n; string a,b;
    long long salary;
    cout<<"Entre Employee Id:";
    cin>>n;
    cout<<"Entre Employee city :";
    cin>>a;
    cout<<"Entre Employee Designation :";
    cin>>b;
    cout<<"Entre Employee Salary :";
    cin>>salary;
    e.getdata(n,a,b,salary);
    e.display();
} 
