#include<iostream>
using namespace std;
int main()
{
    char C;
    int low_case,upp_case;
    cout<<"Enter Character =";
    cin>>C;
    low_case = (C=='a' || C=='e' || C=='i'||C=='o'||C=='u');
    upp_case = (C=='A' || C=='E' || C=='I'||C=='O'||C=='U');

    if(low_case || upp_case)
    {
        cout<<"Character is Vowel "<<C;
    }
    else 
    {
        cout<<"Character is Consonent "<<C;
    }
}