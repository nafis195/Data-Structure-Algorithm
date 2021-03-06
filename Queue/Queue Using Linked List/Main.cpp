// Bismillahir Rahmanir Rahim
// Nafis Chowdhury
// Queue Using Linked List
// Main.cpp

#include<iostream>
using namespace std;

// structure of node
struct Node
{
	int data;
	Node* next;
};

Node* front = NULL;
Node* rear = NULL;

// isEmpty function
bool isEmpty()
{
	if (front == NULL && rear == NULL)
		return true;
	else 
		return false;
}

// enqueue operation
void enqueue(int item)
{
	Node* temp = new Node();
	temp->data = item;
	temp->next = NULL;

	if (front == NULL)
	{
		front = temp;
		rear = temp;
	}
	else
	{
		rear->next = temp;
		rear = temp;
	}
}

// dequeue operation
void dequeue()
{
	if (isEmpty())
		cout << "Queue is empty." << endl;
	else if (front == rear)
	{
		Node* temp = front;
		delete temp;
		front = rear = NULL;
	}
	else
	{
		Node* temp = front;
		front = front->next;
		delete temp;
	}
}

// showFront function
void showFront()
{
	if (isEmpty())
		cout << "Queue is empty." << endl;
	else
		cout << "Front element is- " << front->data << endl;
}

// displayQueue function
void displayQueue()
{
	if (isEmpty())
		cout << "Queue is empty." << endl;
	else
	{
		Node* temp = front;

		cout << "Queue is- ";
		while (!temp == NULL)
		{
			cout << temp->data << ' ';
			temp = temp->next;
		}
		cout << endl;
	}
}

// main function
int main()
{
	enqueue(2); displayQueue();
	enqueue(12); displayQueue();
	enqueue(7); displayQueue();
	dequeue(); displayQueue();
	dequeue(); displayQueue();
	enqueue(67); displayQueue();
	enqueue(45); displayQueue();
	dequeue(); displayQueue();

	system("pause");
	return 0;
}