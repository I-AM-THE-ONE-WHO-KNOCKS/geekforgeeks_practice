#include<iostream>

using namespace std;

int fun(const int& a)
{
	cout<<a<<endl;
}

int main()
{
fun(10);
return 0;
}
