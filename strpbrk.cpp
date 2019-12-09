/*
This function finds the first character in the string s1 that
 matches any character specified in s2 (It excludes terminating null-characters).

Syntax : 
char *strpbrk(const char *s1, const char *s2)

Parameters :
s1 : string to be scanned.
s2 : string containing the characters to match.

Return Value :
It returns a pointer to the character in s1 that 
matches one of the characters in s2, else returns NULL.
*/

// C code to demonstrate the working of 
// strpbrk 
#include <stdio.h> 
#include <string.h> 

// Driver function 
int main() 
{ 
	// Declaring three strings 
	char s1[] = "geeksforgeeks"; 
	char s2[] = "app"; 
	char s3[] = "kite"; 
	char* r, *t; 

	// Checks for matching character 
	// no match found 
	r = strpbrk(s1, s2); 
	if (r != 0) 
		printf("First matching character: %c\n", *r); 
	else
		printf("Character not found"); 

	// Checks for matching character 
	// first match found at "e" 
	t = strpbrk(s1, s3); 
	if (t != 0) 
		printf("\nFirst matching character: %c\n", *t); 
	else
		printf("Character not found"); 

	return (0); 
} 
