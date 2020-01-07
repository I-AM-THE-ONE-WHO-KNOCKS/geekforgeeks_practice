#include<iostream>
#include<queue>

using namespace std;

struct node
{
	int key;
	node* left;
	node* right;	
};

node* newnode(int k)
{
	node* newnode = new(node);
	newnode->key = k;
	newnode->left = nullptr;
	newnode->right = nullptr;
	return newnode;
}

void printBSF(node* R)
{
	if(R == nullptr)
		return;

	queue<node*> que;
	node* currnode;

	que.push(R);
	que.push(nullptr);

	while(que.size() > 1)
	{
		currnode = que.front();
		que.pop();

		if(currnode == nullptr)
		{
			que.push(nullptr);
		}
		else
		{
			if(currnode->left != nullptr)
				que.push(currnode->left);

			if(currnode->right != nullptr)
				que.push(currnode->right);

			cout<<currnode->key<<" ";
		}
	}
}

void inorderprint(node* R)
{
	if(R == nullptr)
		return;

	inorderprint(R->left);
	cout<<R->key<<" ";
	inorderprint(R->right);
}

void preorderprint(node* R)
{
	if(R == nullptr)
		return;

	cout<<R->key<<" ";
	preorderprint(R->left);
	preorderprint(R->right);
}

void postorderprint(node* R)
{
	if(R == nullptr)
		return;

	preorderprint(R->left);
	preorderprint(R->right);
	cout<<R->key<<" ";
}

int main(int argc, char const *argv[])
{
	node* root = newnode(0);
	root->left = newnode(1);
	root->right = newnode(2);
	root->left->left = newnode(3);
	root->left->right = newnode(4);
	root->right->left = newnode(5);

	cout<<endl<<"print BSF: ";
	printBSF(root);
	cout<<endl<<"print inorder: ";
	inorderprint(root);
	cout<<endl<<"print preorder: ";
	preorderprint(root);
	cout<<endl<<"print postorder: ";
	postorderprint(root);
	return 0;
}