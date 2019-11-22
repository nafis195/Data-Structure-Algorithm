// Bismillahir Rahmanir Rahim
// Nafis Chowdhury
// Stack Using Array in Class Object Method
// Stack.cpp

#include"Stack.h"

// constructor
Stack::Stack()
{
	top = -1;
}

// destructor
Stack::~Stack()
{

}

// push operation
void Stack::push(int item)
{
	top++;
	A[top] = item;
}

// pop operation
void Stack::pop(int & item)
{
	item = A[top];
	top--;
}

// isEmpty function
bool Stack::isEmpty()
{
	if (top == -1)
		return true;
	else
		return false;

	// return (top == -1)  this could be used instead of 4 above lines.
}

// isFull function
bool Stack::isFull()
{
	if (top == SIZE - 1)
		return true;
	else
		return false;

	// retrun (top == SIZE - 1)  this could be used instead of 4 above lines. 
}

// displayStack function
void Stack::displayStack()
{
	cout << "Stack: ";
	for (int i = 0; i <= SIZE; i++)
	{
		cout << A[i] << ' ';
	}
}

// makeEmpty function
void Stack::makeEmpty()
{
	top = -1;
}
