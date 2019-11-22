// Bismillahir Rahmanir Rahim
// Nafis Chowdhury
// Stack Using Linked List in Class Object Method
// Main.cpp

#include"Stack.h"

int main()
{
	Stack stack;
	stack.push(2);
	stack.push(10);
	stack.push(65);
	stack.displayStack();
	stack.pop();
	stack.displayStack();

	system("pause");
	return 0;
}