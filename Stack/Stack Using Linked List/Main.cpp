// Bismillahir Rahmanir Rahim
// Nafis Chowdhury
// Stack Using Linked List

#include<iostream>
using namespace std;

struct Node
{
	int data;
	Node* next;
};

Node* top = NULL;

// isEmpty function
bool isEmpty()
{
	if (top == NULL)
		return true;
	else
		return false;
}

// push operation
void push(int value)
{
	Node* ptr = new Node();
	ptr->data = value;
	ptr->next = top;
	top = ptr;
}

// pop operation
void pop()
{
	if (isEmpty())
		cout << "Stack is empty." << endl;
	else
	{
		Node* ptr = top;
		top = top->next;
		delete ptr;
	}
}

// showTop function
void showTop()
{
	if (isEmpty())
		cout << "Stack is empty." << endl;
	else
		cout << top->data << endl;
}

// display function
void displayStack()
{
	if (isEmpty())
		cout << "Stack is empty." << endl;
	else
	{
		Node* current = top;
		while (!current->next == NULL)
		{
			cout << current->data << ' ';
			current = current->next;
		}
		cout << endl;
	}
}

// main function
int main()
{
	push(2); displayStack();
	push(5); displayStack();
	push(10); displayStack();
	pop(); displayStack();
	push(7); displayStack();
	pop(); displayStack();

	system("pause");
	return 0;
}