//41.Program which implement concept of Hybrid Inheritance.

/*Hybrid Inheritance is implemented by combining more than one type of inheritance. 
For example: Combining Hierarchical inheritance and Multiple Inheritance. */
#include <iostream>
using namespace std;

// base class
class Vehicle
{
public:
    Vehicle()
    {
        cout << "This is a Vehicle" << endl;
    }
};

//base class
class Fare
{
public:
    Fare()
    {
        cout << "Fare of Vehicle\n";
    }
};

// first sub class    //Herirachichal Inheritance = 1 base clss, Saari derived class
class Car : public Vehicle
{
    public:
    Car()
    {
        cout << "Car Class\n";
    }

};

// second sub class  // Multiple Inheritance = sirf ek derived class ....Base Class Unlimited
class Bus : public Vehicle, public Fare
{
    public:
     Bus()
    {
        cout << " Bus Class \n";
    }
};

// main function
int main()
{
    // creating object of sub class will
    // constructor of base class
    Bus obj2;
    Car obj1;
    return 0;
}
