/*
Basically, “array” is a “pointer to the first element of array” but “&array” 
is a “pointer to whole array of 5 int”. Since “array” is pointer to int, 
addition of 1 resulted in an address with increment of 4 (assuming int 
size in your machine is 4 bytes). Since “&array” is pointer to array of 
5 ints, addition of 1 resulted in an address with increment of 4 x 5 = 20 = 0x14. 
Now you see why these two seemingly similar pointers are different at core level. 
This logic can be extended to multidimensional arrays as well. Suppose double 
twoDarray[5][4] is a 2D array. Here, “twoDarray” is a pointer to array of 4 
int but “&twoDarray” is pointer to array of 5 rows arrays of 4 int”. If this 
sounds cryptic, you can always have a small program to print these after adding 1.
 We hope that we could clarify that any array name itself is a pointer to the first 
 element but & (i.e. address-of) for the array name is a pointer to the whole array itself.
*/

 /* 

 so how to get the size of array without using sizeof

 */

 #include<iostream>

 using namespace std;

 int main()
 {
 	int arr[5] = {1, 2, 3, 4, 5};

 	int size = *(&arr + 1) - arr;

 	cout<<"size of array :" <<size<<endl;
 }