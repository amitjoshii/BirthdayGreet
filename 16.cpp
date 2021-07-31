//16.Program to calculate square of number using following function types:-

// (i)Function with no return value and no argument.

/* #include <iostream>
using namespace std;

void sq()
{
    float num,s;
    cout << "Enter any Number =";
    cin>>num;
    s = num * num;
    cout << "Square of " << num << " is = " << s;
}
int main()
{
    sq();
    return 0;
}  */

//  (ii)Function with arguments passed and no return value.
/* #include <iostream>
using namespace std;

void sq(int num)
{
    float s = num * num;
    cout << "Square of " << num << " is = " << s;
}
int main()
{
    float num;
    cout << "Enter any Number =";
    cin >> num;
    sq(num);
    return 0;
}
 */



//(iii)Function with no arguments but returns a value. 
/* #include <iostream>
using namespace std;

float sq()
{
    float num,s;
    cout << "Enter any Number =";
    cin>>num;
    s = num * num;
    return s;
}
int main()
{
    float number = sq();
    cout << "Square of  is = " << number;
    return 0;
} */ 

//(iv)Function with arguments and returns a value.
#include <iostream>
using namespace std;

float sq(float n)
{
    float s;
    float num=n;
    s = num * num;
    return s;
}
int main()
{
    float num;
    cout << "Enter any Number =";
    cin>>num;
    float number = sq(num);
    cout << "Square of "<<num <<" is = " << number;
    return 0;
}