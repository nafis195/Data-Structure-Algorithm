// Bismillahir Rahmanir Rahim
// Nafis Chowdhury
// Stack Using Linked List in Class Object Method
// Stack.cpp

#include"Stack.h"

// constructor
Stack::Stack()
{
	head = NULL;
}

// destructor
Stack::~Stack()
{
	
}

// push operation
void Stack::push(int item)
{
	Node* temp = new Node();
	temp->data = item;
	temp->next = head;
	head = temp;
}

// pop operation
void Stack::pop()
{
	if (head == NULL)
		cout << "Stack is empty." << endl;
	else
	{
		Node* current = head;
		head = head->next;
		delete current;
	}
	cout << "Last item was popped off from the stack." << endl;
}

// displayStack function
void Stack::displayStack()
{
	if (head == NULL)
		cout << "Stack is empty" << endl;
	else
	{
		Node* follow = head;
		while (!follow == NULL)
		{
			cout << follow->data << endl;
			follow = follow->next;
		}
		cout << endl;
	}
}
