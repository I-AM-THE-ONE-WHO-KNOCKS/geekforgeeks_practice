/*

Consider a problem where we need to take an unknown number of integer inputs.

A typical solution is to run a loop and stop when a user enters a particular 
value. How to do it if we are not allowed to use if-else, switch-case and conditional statement.

The idea is to use the fact that ‘cin >> input’ false if non-numertic value is given. 
Note that this above approach holds true only when input value’s data type is int (integer).

but,
Until C++11, std::istream had a conversion function operator void*() const;,
meaning that there was an implicit conversion from std::istream to void*
In C++11 and later, std::istream instead has a conversion function explicit bool() const;, 
meaning that there is a valid conversion from std::istream to bool, 
but only where explicitly requested. An if or while counts as explicitly 
requesting a conversion to bool, 
so you can use this casting to check valid inpute.

*/

// CPP program to take unknown number 
// of integers from user. 
#include <iostream> 
using namespace std; 
int main() 
{ 
    int input;  
    int count = 0;  
    cout << "To stop enter any character"; 
    cout << "\nEnter Your Input::"; 
  
    // cin returns false when a character 
    // is entered 
    while (cin >> input)  
        count++;  
      
    cout << "\nTotal number of inputs entered: " 
         << count; 
    return 0; 
} 