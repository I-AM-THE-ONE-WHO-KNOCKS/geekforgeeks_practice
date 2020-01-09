#include<iostream>
#include<string.h>

using namespace std;

template<class T>

T add(T a, T b)
{

	return(a+b);

}

template<>
const char* add(const char *a, const char *b)
{
	int l1 = strlen(a);
	int l2 = strlen(b);
	char* s = new char[l1+l2];
	strcpy(s, a);
	strcat(s, b);
	return s;
}

template<class T1>
class temp
{
	T1 key;
	
public:
	temp(T1 k):key(k){};
	~temp(){};

	T1 getkey()
	{
		return key;
	}
};

int add(int a, int b)
{
	return(a+b);
}


int main()
{
	string x = "hi";
	string y = "hello";
	cout<<add(1, 2)<<endl;
	cout<<add(3.0, 4.0)<<endl;
	cout<<add(x, y)<<endl;
	cout<<add("x", "y")<<endl;
	int (*funptr)(int, int) = &add;

	cout<<funptr(5, 5)<<endl;

	temp<int> T1(10);
	cout<<T1.getkey()<<endl;
	
	return 0;
}
