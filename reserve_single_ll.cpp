#include<iostream>

using namespace std;

struct node
{
	int key;
	node* next;
};

node* newnode(node* head, int k)
{
	node* temp = new (node);
	temp->key = k;
	temp->next = nullptr;
	if(head == nullptr)
	{
		head = temp;
	}
	else
	{
		node* n = head;
		while(n->next != nullptr)
		{
			n = n->next;
		}
		n->next = temp;
	}

	return head;
}

node* reverselist(node* head)
{
	if(head == nullptr)
		return head;

	if(head->next == nullptr)
		return head;

	node* cur = head;;
	node* next = nullptr;
	node* prev = nullptr;

	while(cur != nullptr)
	{
		next = cur->next;
		cur->next = prev;
		
		prev = cur;
		cur = next;	
	}
	head = prev;

	return head;
}

node* reverse(node* head)
{
	if((head == nullptr) || (head->next == nullptr))
		return head;


	node* rev = reverse(head->next);
	head->next->next = head;

	head->next = nullptr;


	return rev;
}

int main()
{
	node* head = nullptr;
	head = newnode(head, 1);
	head = newnode(head, 2);
	head = newnode(head, 3);
	head = newnode(head, 4);
	head = newnode(head, 5);
	
	node* temp = head;
	while(temp != nullptr)
	{
		cout<<temp->key<<" ";
		temp = temp->next;
	}
	cout<<endl;

	head = reverse(head);
	temp = head;
        while(temp != nullptr)
        {
                cout<<temp->key<<" ";
                temp = temp->next;
        }
        cout<<endl;

	return 0;
}
