#include<iostream>
#include<initializer_list>

using namespace std;

template<typename T>
T sum(T key)
{
	return(key);
}

template<typename T, typename...arg>
T sum (T a, arg... b)
{
	return(a + sum(b...));
}

int main()
{
	cout<<"sum of 1-5 using variadic template is : "; 	
	cout<<sum(1, 2, 3, 4, 5)<<endl;

	return 0;
}
