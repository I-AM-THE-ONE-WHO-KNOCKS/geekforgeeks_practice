// C++ program to demonstrate working of raw string. 
#include <iostream> 
using namespace std; 
  
int main() 
{ 
    // A Normal string 
    string string1 = "Geeks.\nFor.\nGeeks.\n" ;  

    //A Raw string before c++11
    string string3 = "Geeks.\\nFor.\\nGeeks.\\n";
  
    // A Raw string after c++11
    string string2 = R"(Geeks.\nFor.\nGeeks.\n)";  
  
    cout << string1 << endl; 

    cout << string3 << endl;
  
    cout << string2 << endl; 
      
    return 0; 
} 

/*

In C++, to escape characters like “\n” we use an extra “\”. 
From C++ 11, we can use raw strings in which escape characters 
(like \n \t or \” ) are not processed. The syntax of raw string 
is that the literal starts with R”( and ends in )”.

*/