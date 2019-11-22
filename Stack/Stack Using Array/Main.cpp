// Bismillahir Rahmanir Rahim
// Nafis Chowdhury
// Stack Using Array
// Main.cpp

#include<iostream>
#define MAX_SIZE 101

using namespace std;

int top = -1;
int A[MAX_SIZE];

// push operation
void push(int x)
{
	if (top == MAX_SIZE - 1) // check if the stack is already full or not
		cout << "Stack is full" << endl;

	top++;
	A[top] = x;
}

// pop operation
void pop()
{
	if (top == -1) // check if the stack is already empty or not
		cout << "Stack is empty" << endl;

	top--;
}

// top operation
int Top()
{
	return A[top]; // return the top element of the stack
}

// empty function
int isEmpty()
{
	if (top == -1)
		return 1;
	else
		return 0;
}

// print function
void print()
{
	cout << "Stack: ";
	for (int i = 0; i <= top; i++)
		cout << A[i] << ' ';
	cout << endl;
}

// main function
int main()
{
	push(2); print();
	push(10); print();
	push(7); print();
	pop(); print();
	push(9); print();
	pop(); print();

	system("pause");
	return 0;
}

