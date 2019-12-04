/*

How to read only a part of the input that we need? For example, 
consider some input stream that contains only characters followed 
by an integer or a float. And we need to scan only that integer or float.

*/

/* C program to demonstrate that we can 
   ignore some string in scanf() */
#include <stdio.h> 
int main() 
{ 
    int a; 
    scanf("This is the value %d", &a); 
    printf("Input value read : a = %d", a); 
    return 0; 
} 
// Input  : This is the value 100 
// Output : Input value read : a = 100 

/*

Now, assume we don’t know what the preceding characters are but we 
surely know that the last value is an integer. How can we scan the last value as an integer?

Below solution works only if input string has no spaces.

 Sample C program to demonstrate use of *s 
#include<stdio.h> 
int main() 
{ 
	int a; 
	scanf("%*s %d", &a); 
	printf("Input value read : a=%d",a); 
	return 0; 
} 

// Input: "blablabla 25" 
// Output: Value read : 25 

Explanation: The %*s in scanf is used to ignore some input as required. 
In this case, it ignores the input until the next space or new line. 
Similarly if you write %*d it will ignore integers until the next space or new line.

*/
