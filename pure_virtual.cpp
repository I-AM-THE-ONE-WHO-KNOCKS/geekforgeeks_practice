#include<iostream>

using namespace std;

class person
{
public:
	virtual void aboutme()
	{
		cout<<"I am Person"<<endl;
	}
	virtual void addSubjectkey(int key)=0;

	virtual ~person()
	{
		cout<<"deleting person"<<endl;
	}	
};

class student:public person
{
public:
	/*virtual void aboutme()
	{
		cout<<"I am Student"<<endl;
	}*/
	void addSubjectkey(int key)
	{
		cout<<"student subject key: "<<key<<" added"<<endl;
	}
	
	~student()
	{
		cout<<"deleting student"<<endl;
	}
};

int main()
{
	person *p = new(student);
	p->aboutme();
	p->addSubjectkey(10);

	delete p;

	return 0;
}
