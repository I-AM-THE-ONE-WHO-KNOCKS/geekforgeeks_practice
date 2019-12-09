/*

The wcscmp() function is defined in cwchar.h header file. 
The wcscmp() function is used to compares two null terminating 
wide string and this comparison is done lexicographically.

Syntax:

int wcscmp(const wchar_t* str1, const wchar_t* str2);

str1: This represents the pointer to the first string to be compare.
str2: This represents the pointer to the second string to be compare.
Return Value: This method returns:

Zero: If the str1 and str2 are same.
Positive value: If the first different character in str1 is 
greater than the corresponding character in str2.
Negative value: If the first different character in str1 is 
less than the corresponding character in str2.

*/

// c++ program to demonstrate 
// example of wcscmp() function. 

#include <bits/stdc++.h> 
using namespace std; 

int main() 
{ 
	// initialize the str1 
	wchar_t str1[] = L"Computer"; 

	// initialize the str2 
	wchar_t str2[] = L"Science"; 

	// Compare and print results 
	wcout << L"Comparing " << str1 << L" and "
		<< str2 << L" = " << wcscmp(str1, str2) << endl; 

	// Compare and print results 
	wcout << L"Comparing " << str2 << L" and "
		<< str2 << L" = " << wcscmp(str2, str2) << endl; 

	// Compare and print results 
	wcout << L"Comparing " << str2 << L" and "
		<< str1 << L" = " << wcscmp(str2, str1) << endl; 

	return 0; 
} 
