/*
The wcscat() function is specified in header file cwchar.h 
and this function is use to append a copy of wide string to the end of another string.

Syntax:

wchar_t* wcscat( wchar_t* dest, const wchar_t* src );

dest: specifies the pointer to the destination array.
src: specifies the string to be added to the destination.
Return: This function returns the new appended string.
*/

// C++ program to demonstrate 
// example of wcscat() function. 

#include <bits/stdc++.h> 
using namespace std; 

int main() 
{ 

	// maximum length of the destination string 
	wchar_t dest[30]; 

	// maximum length of the source string 
	wchar_t src[30]; 

	// initialize the destination string 
	wcscpy(dest, L"Geekforgeeks "); 

	// initialize the source string 
	wcscpy(src, L"is the best"); 


	wcscat(dest, src); 
	wprintf(L"%ls\n", dest); 
	return 0; 
} 
