// Bismillahir Rahmanir Rahim
// Nafis Chowdhury
// Stack Using Array in Class Object Method
// Main.cpp

#include"Stack.h"

int main()
{
	Stack stack;
	int number = 1;

	while (!stack.isFull())
	{
		stack.push(number);
		number++;
	}
	cout << "Stack is full" << endl;

	cout << "Now popping off the stack." << endl;

	while (!stack.isEmpty())
	{
		stack.pop(number);
		cout << number << endl;
	}
	cout << "Stack is empty." << endl;

	system("pause");
	return 0;
}
