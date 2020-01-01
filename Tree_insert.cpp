// uses breadth first search algorithm

#include<iostream>
#include<queue>

using namespace std;

struct node
{
	int key;
	node* left;
	node* right;
};

struct node* newNode(int k)
{
	node* newnode = new(node);
	newnode->key = k;
	newnode->left = NULL;
	newnode->right = NULL;
	return newnode;
}

void printtree(struct node* temp)
{
	if(!temp)
	return;

	printtree(temp->left); 
        cout << temp->key << " "; 
        printtree(temp->right); 
}

void inserttree(struct node* temp, int k)
{
    queue<struct node*> q; 
    q.push(temp); 
  
    // Do level order traversal until we find 
    // an empty place.  
    while (!q.empty()) { 
        struct node* temp = q.front(); 
        q.pop(); 
  
        if (!temp->left) { 
            temp->left = newNode(k); 
            break; 
        } else
            q.push(temp->left); 
  
        if (!temp->right) { 
            temp->right = newNode(k); 
            break; 
        } else
            q.push(temp->right); 
    } 
}
int main()
{
    struct node* root = newNode(10); 
    root->left = newNode(11); 
    root->left->left = newNode(7); 
    root->right = newNode(9); 
    root->right->left = newNode(15); 
    root->right->right = newNode(8); 
  
    cout << "Inorder traversal before insertion:"; 
    printtree(root); 
  
    int key = 12; 
    inserttree(root, key); 
  
    cout << endl; 
    cout << "Inorder traversal after insertion:"; 
    printtree(root); 
    cout << endl;
    return 0;
}
