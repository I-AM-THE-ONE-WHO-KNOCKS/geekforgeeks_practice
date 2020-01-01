#include<iostream>

using namespace std;

struct node
{
	int data;
	node *left;
	node *right;
};

	struct node* newnode(int d)
	{
		struct node* newnode = new(node);
		newnode->data = d;

		newnode->left = NULL;
		newnode->right = NULL;
		
		return newnode;
	}

int main()
{

	struct node* R = newnode(0);
	R->left = newnode(1);
	R->right = newnode(2);

	cout<<"Root val: "<<R->data<<endl;
	cout<<"Root left val: "<<R->left->data<<endl;
	cout<<"Root right val: "<<R->right->data<<endl;

	return 0;
}
