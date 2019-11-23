// Bisnmillahir Rahmanir Rahim
// Nafis Chowdhury
// Queue Using Array
// Main.cpp

#include<iostream>
using namespace std;

const int SIZE = 10;
int A[SIZE];
int front = -1;
int rear = -1;

// isEmpty function
bool isEmpty()
{
	if (front == -1 && rear == -1)
		return true;
	else
		return false;
}

// enqueue operation
void enqueue(int item)
{
	if (rear == SIZE - 1) // check if the queue is already full or not
		cout << "Queue is full." << endl;
	else
	{
		if (front == -1)
			front = 0;
		rear++;
		A[rear] = item;
	}
}

// dequeue operation
void dequeue()
{
	if (isEmpty()) // check if the queue is already empty or not
		cout << "Queue is empty." << endl;
	else if (front == rear) // check if the queue has only one item
		front = rear = -1;
	else // otherwise increase the front
		front++;
}

// showFront function
void showFront()
{
	if (isEmpty())
		cout << "Queue is full." << endl;
	else
		cout << "Front item in the queue is- " << ' ' << A[front] << endl;
}

// displayQueue function
void displayQueue()
{
	if (isEmpty())
		cout << "Queue is full." << endl;
	else
	{
		cout << "Queue is- ";
		for (int i = front; i <= rear; i++)
			cout << A[i] << ' ';
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