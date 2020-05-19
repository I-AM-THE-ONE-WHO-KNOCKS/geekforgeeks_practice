#include<iostream>

using namespace std;

int main()
{
	int a = 10;
	int b = 20;

	int* const ptr = &a;
	
	ptr = &b;

	cout<<*ptr<<endl;

	return 0;
}
