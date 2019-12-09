/*

The wcslen() function is defined in cwchar.h header file. 
The function wcslen() function returns the length of the given wide string.

Syntax:

size_t wcslen(const wchar_t* str);
Parameter: This method takes a single parameter str which represents 
the pointer to the wide string whose length is to be calculated.

Return Value: This function returns the length of wide string.

*/

// c++ program to demonstrate 
// example of wcslen() function. 

#include <bits/stdc++.h> 
using namespace std; 

int main() 
{ 

	// Get the string to be used 
	wchar_t str[] = L"geeks"; 

	// Get the length of the string using wcslen() 
	wcout << L"The length of '" << str 
		<< L"' is =" << wcslen(str) << endl; 

	return 0; 
} 
