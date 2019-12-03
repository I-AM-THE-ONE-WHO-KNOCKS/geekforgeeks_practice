// what happens when the range of data type is exceeds, lets see

#include<iostream>

using namespace std;

int main()
{
	for(char a = 0; a <= 255; a++)
	{
		cout<<a;
	}
	return 0;
}

/*Will this code print ‘a’ till it becomes 226? Well 
the answer is indefinite loop, because here ‘a’ is 
declared as a char and its valid range is -128 to +127. 
When ‘a’ become 128 through a++, the range is exceeded 
and as a result the first number from negative side of 
the range (i.e. -128) gets assigned to a. Hence the 
condition “a <= 225” is satisfied and control remains 
within the loop.*/