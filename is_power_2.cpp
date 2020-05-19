#include<iostream>
#include<math.h>

using namespace std;

int main()
{
	int n;
	cout<<"enter a number"<<endl;

	cin>>n;

	if(ceil(log2(n)) == floor(log2(n)))
		cout<<"yes"<<endl;
	else
		cout<<"No"<<endl;
	
	return 0;
}
