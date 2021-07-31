//40.Write a C++ Program to enter Student details using Hierarchical Inheritance.
//Herarchical Inheritance
#include<stdio.h>
#include<iostream>
using namespace std;
 
class Student
{
    protected:
    string First_Name,Last_Name;
    string F_Name,L_Name;
    long long P_No;
    string Cour_Name;
    string Sub_name;
    string Sub_code;
    int code;

};
 
class Stu_Detail: public Student
{
    public:
    void Input_s_Detail()
    {
      cout << "Enter Name of the students :" << endl;
      cin>>First_Name>>Last_Name;
      cout<<"Entre Your Father Name :";
      cin>>F_Name>>L_Name;
      cout<<"Entre Your Contact Number :";
      cin>>P_No;
    }

    void Stud_Detail_Disp()
    {
        cout<<"Candidate  Name :"<<First_Name<<Last_Name<<endl;
        cout<<"Candidate Father Name :"<<F_Name<<L_Name<<endl;
        cout<<"Candidate Contact Number :"<<P_No<<endl;
    }
 
};
class Course: public Student
{
    public:
     void Input_S_Course()
    {
      cout << "Enter course of the  students :" << endl;
      cin>>Cour_Name;
      cout<<"Entre Your Subject Name :";
      cin>>Sub_name;
      cout<<"Entre Subject code S+I:";
      cin>>Sub_code>>code;
    }

    void Display_Course()
    {
        cout<<" Course Name :"<< Cour_Name<<endl;
        cout<<" Subject Name :"<<Sub_name<<endl;
        cout<<" Subject Code :"<<Sub_code << code<<endl;
    }
     
};
int main()
{
    Stu_Detail s;
    s.Input_s_Detail();
    s.Stud_Detail_Disp();
    Course c;
    c.Input_S_Course();
    c.Display_Course();
    return 0;
}


Enter Name of the students :
Amit
Joshi
Entre Your Father Name :Manohar
Joshi
Entre Your Contact Number :8109172039
Candidate  Name :AmitJoshi
Candidate Father Name :ManoharJoshi
Candidate Contact Number :8109172039
Enter course of the  students :
MCA
Entre Your Subject Name :OOPS
Entre Subject code S+I:CAS
04
 Course Name :MCA
 Subject Name :OOPS
 Subject Code :CAS4