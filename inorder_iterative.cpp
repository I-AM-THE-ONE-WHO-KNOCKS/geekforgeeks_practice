#include<iostream>
#include<stack>

using namespace std;

struct node
{
	int key;
	node* left;
	node* right;
};

node* newnode(int key)
{
	node* newnode = new (node);

	newnode->key = key;
	newnode->left = nullptr;
	newnode->right = nullptr;
	return newnode;
} 

void iterativePreorder(node *root) 
{ 
    // Base Case 
    if (root == NULL) 
       return; 
  
    // Create an empty stack and push root to it 
    stack<node *> nodeStack; 
    nodeStack.push(root); 
  
    /* Pop all items one by one. Do following for every popped item 
       a) print it 
       b) push its right child 
       c) push its left child 
    Note that right child is pushed first so that left is processed first */
    while (nodeStack.empty() == false) 
    { 
        // Pop the top item from stack and print it 
        struct node *node = nodeStack.top(); 
        printf ("%d ", node->data); 
        nodeStack.pop(); 
  
        // Push right and left children of the popped node to stack 
        if (node->right) 
            nodeStack.push(node->right); 
        if (node->left) 
            nodeStack.push(node->left); 
    } 
} 

void inorder(node* root)
{
	stack<node*> s;
	node* curr = root;

	while(curr != nullptr || s.empty() == false)
	{
		while(curr != nullptr)
		{
			s.push(curr);
			curr = curr->left;
		}
		
		curr = s.top();
		s.pop();
		
		cout<<curr->key<<" "<<endl;

		curr = curr->right;
	}
}

int main()
{
	node* root = newnode(1);
	root->left = newnode(2);
	root->right = newnode(3);
	root->left->left = newnode(4);
	root->left->right = newnode(5);

	inorder(root);
}
