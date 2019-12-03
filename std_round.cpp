#include <cmath> 
#include <iostream> 
using namespace std; 
  
int main() 
{ 
    // initializing value 
    double x = 12.5, y = 13.3, z = 14.8; 
  
    // Displaying the nearest values 
    // of x, y and z 
    cout << "Nearest value of x :" << round(x) << "\n"; 
    cout << "Nearest value of y :" << round(y) << "\n"; 
    cout << "Nearest value of z :" << round(z) << "\n"; 
  
    // For lround 
    cout << "lround(-0.0) = " << lround(-0.0) << "\n"; 
    cout << "lround(2.3) = " << lround(2.3) << "\n"; 
    cout << "lround(2.5) = " << lround(2.5) << "\n"; 
    cout << "lround(2.7) = " << lround(2.7) << "\n"; 
    cout << "lround(-2.3) = " << lround(-2.3) << "\n"; 
    cout << "lround(-2.5) = " << lround(-2.5) << "\n"; 
    cout << "lround(-2.7) = " << lround(-2.7) << "\n"; 
  
    // For llround 
    cout << "llround(-0.01234) = " << llround(-0.01234) << "\n"; 
    cout << "llround(2.3563) = " << llround(2.3563) << "\n"; 
    cout << "llround(2.555) = " << llround(2.555) << "\n"; 
    cout << "llround(2.7896) = " << llround(2.7896) << "\n"; 
    cout << "llround(-2.323) = " << llround(-2.323) << "\n"; 
    cout << "llround(-2.5258) = " << llround(-2.5258) << "\n"; 

    return 0;
}

/*round is used to round off the given digit which can be in float or double. It returns the nearest integral value to provided parameter in round function, with halfway cases rounded away from zero. Instead of round(), std::round() can also be used .
Header files used -> cmath, ctgmath

Syntax :

Parameters: x, value to be rounded
double round (double x);
float round (float x);
long double round (long double x);
double round (T x);           
// additional overloads for integral types

Returns: The value of x rounded to the nearest 
integral (as a floating-point value).*/

/*
output

Nearest value of x :13
Nearest value of y :13
Nearest value of z :15
lround(-0.0) = 0
lround(2.3) = 2
lround(2.5) = 3
lround(2.7) = 3
lround(-2.3) = -2
lround(-2.5) = -3
lround(-2.7) = -3
llround(-0.01234) = 0
llround(2.3563) = 2
llround(2.555) = 3
llround(2.7896) = 3
llround(-2.323) = -2
llround(-2.5258) = -3
llround(-2.71236) = -3
*/