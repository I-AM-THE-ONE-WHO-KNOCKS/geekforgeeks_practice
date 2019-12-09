// c++ program to demonstrate 
// example of wmemmove() function. 

/*

The wmemmove() function is defined in cwchar.h header file. 
The wmemmove() function copies a specified number of wide 
characters from source to the destination.

Syntax:

wchar_t* wmemmove(wchar_t* dest, const wchar_t* src, size_t n);

dest: specifies the pointer to the destination array.
src specifies the pointer to the source array.
n: Number of wide characters to copy from src to dest.
Returns: The wmemmove() function returns the modified destination.

*/

#include <bits/stdc++.h> 
using namespace std; 

int main() 
{ 

	// maximum length of the destination string 
	wchar_t dest[30]; 

	// maximum length of the source string 
	wchar_t src[30]; 

	// initialize the destination string 
	wcscpy(dest, L"A computer science portal for geeks"); 

	wprintf(L"Destination: %ls\n", dest); 

	// initialize the source string 
	wcscpy(src, L"geeksforgeeks"); 

	wprintf(L"Source: %ls\n", src); 

	wmemmove(dest+2, src+3, 5); 

	wprintf(L"After modication, destinstion: %ls\n", dest); 

	return 0; 
} 
