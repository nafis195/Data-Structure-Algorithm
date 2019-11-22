// Bismillahir Rahmanir Rahim
// Nafis Chowdhury
// Stack Using Linked List in Class Object Method
// Stack.h

#ifndef STACK_H
#define STACK_H

#include"Struct.h"

class Stack
{
private:
	Node* head;
public:
	Stack();
	~Stack();
	void push(int item);
	void pop();
	void displayStack();
};
#endif