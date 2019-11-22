// Bismillahir Rahmanir Rahim
// Nafis Chowdhury
// Stack Using Array in Class Object Method
// Stack.h

#pragma once
#include<iostream>
using namespace std;

const int SIZE = 10;

#ifndef STACK_H
#define STACK_H

class Stack
{
private:
	int top;
	int A[SIZE];
public:
	Stack();
	~Stack();
	void push(int item);
	void pop(int & item);
	bool isEmpty();
	bool isFull();
	void displayStack();
	void makeEmpty();
};

#endif
