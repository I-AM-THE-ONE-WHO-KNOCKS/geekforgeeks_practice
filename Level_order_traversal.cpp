#include<iostream>
#include<queue>

using namespace std;

class Node
{
public:
	int data;
	Node* left;
	Node* right;
	Node(int val)
	{
		data = val;
		left = nullptr;
		right = nullptr;
	};
};

void levelorder(Node* root)
{
	if(root == nullptr)
		return;
	queue<Node*> q;

	q.push(root);

	while(q.empty() == false)
	{
		Node* tmp = q.front();
		cout<<tmp->data<<" ";
		q.pop();

		if(tmp->left != nullptr)
			q.push(tmp->left);

		if(tmp->right != nullptr)
			q.push(tmp->right);
	}	
}

int main()
{
    Node *root = new Node(1); 
    root->left = new Node(2); 
    root->right = new Node(3); 
    root->left->left = new Node(4); 
    root->left->right = new Node(5);

    levelorder(root);
    return 0;
} 
