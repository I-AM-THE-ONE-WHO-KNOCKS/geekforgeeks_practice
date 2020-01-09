#include<iostream>

using namespace std;

class Inc
{
private:
	int key;

public:
	Inc(int k = 0)
	{
		key = k;
	};
	
	Inc operator++()
	{
		Inc temp;
		temp.key = key + 1;
		return temp;
	}

	Inc operator++(int)
	{
		Inc temp;
		temp.key = key;
		key = key + 1;
		return temp;
	}

	void getkey()
	{
		cout<<key<<endl;
	}
};

int main()
{
	Inc I(10);

	cout<<"Before Inc "<<endl;
	I.getkey();
	
	Inc I1 = I++;
	
	cout<<"Post increment "<<endl;
	I1.getkey();

	Inc I2 = ++I;

	cout<<"Pre increment "<<endl;
	I2.getkey();

	return 0;
}
