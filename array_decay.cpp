/*

How to prevent Array Decay?
A typical solution to handle decay is to pass size of array also as a 
parameter and not use sizeof on array parameters (See this for details)

Another way to prevent array decay is to send the array into functions 
by reference. This prevents conversion of array into a pointer, hence prevents the decay.

*/

// C++ code to demonstrate prevention of 
// decay of array 
#include<iostream> 
using namespace std; 

// A function that prevents Array decay 
// by passing array by reference 
void fun(int (&p)[7]) 
{ 
	// Printing size of array 
	cout << "Modified size of array by "
			"passing by reference: "; 
	cout << sizeof(p) << endl; 
}


// Driver function to show Array decay 
// Passing array by value 
void aDecay(int *p) 
{ 
    // Printing size of pointer 
    cout << "Modified size of array is by "
            " passing by value: "; 
    cout << sizeof(p) << endl; 
} 
  
// Function to show that array decay happens  
// even if we use pointer 
void pDecay(int (*p)[7]) 
{ 
    // Printing size of array 
    cout << "Modified size of array by "
            "passing by pointer: "; 
    cout << sizeof(p) << endl; 
} 

int main() 
{ 
	int a[7] = {1, 2, 3, 4, 5, 6, 7,}; 

	// Printing original size of array 
	cout << "Actual size of array is: "; 
	cout << sizeof(a) <<endl;

	
    // Calling function by value 
    aDecay(a); 
      
    // Calling function by pointer 
    pDecay(&a); 

	// Calling function by reference 
	fun(a); 

	return 0; 
} 
