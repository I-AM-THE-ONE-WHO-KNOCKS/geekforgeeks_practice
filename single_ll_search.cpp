// Iterative C++ program to search 
// an element in linked list 
#include <bits/stdc++.h> 
using namespace std; 

/* Link list node */
class Node 
{ 
	public: 
	int key; 
	Node* next; 
}; 

/* Given a reference (pointer to pointer) to the head 
of a list and an int, push a new node on the front 
of the list. */
void push(Node** head_ref, int new_key) 
{ 
	/* allocate node */
	Node* new_node = new Node(); 

	/* put in the key */
	new_node->key = new_key; 

	/* link the old list off the new node */
	new_node->next = (*head_ref); 

	/* move the head to point to the new node */
	(*head_ref) = new_node; 
} 

/* Checks whether the value x is present in linked list */
bool search(Node* head, int x) 
{ 
	Node* current = head; // Initialize current 
	while (current != NULL) 
	{ 
		if (current->key == x) 
			return true; 
		current = current->next; 
	} 
	return false; 
}

/* Checks whether the value x is present in linked list */
bool recursivesearch(struct Node* head, int x) 
{ 
    // Base case 
    if (head == NULL) 
        return false; 
      
    // If key is present in current node, return true 
    if (head->key == x) 
        return true; 
  
    // Recur for remaining list 
    return search(head->next, x); 
}  

/* Driver program to test count function*/
int main() 
{ 
	/* Start with the empty list */
	Node* head = NULL; 
	int x = 21; 

	/* Use push() to construct below list 
	14->21->11->30->10 */
	push(&head, 10); 
	push(&head, 30); 
	push(&head, 11); 
	push(&head, 21); 
	push(&head, 14); 

	cout<<"result of iterative search of key = 21 is: ";
        search(head, 21)? cout<<"Yes"<<endl : cout<<"No"<<endl;
	cout<<"resutl of recursive search of key = 12 is: ";
	recursivesearch(head, 14)? cout<<"Yes"<<endl : cout<<"No"<<endl; 
	return 0; 
} 

// This is code is contributed by rathbhupendra 

