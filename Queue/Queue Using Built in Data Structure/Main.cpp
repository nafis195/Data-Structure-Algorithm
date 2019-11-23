// Bismillahir Rahmanir Rahim
// Nafis Chowdhury
// Queue Using Built in Data Structure
// Main.cpp

#include<iostream>
#include<queue>
using namespace std;

// displayQueue function
void displayQueue(queue<int>q)
{
	int n = q.size();

	for (int i = 0; i < n; i++)
	{
		cout << q.front() << ' ';
		q.pop();
	}
	cout << endl;
}

// main function
int main()
{
	queue<int>q1;

	q1.push(2); 
	q1.push(12); 
	q1.push(47); 
	q1.push(67); 
	q1.push(65); 
	displayQueue(q1);

	//for (int i = 0; i <= q1.size(); i++)
	//{
	//	cout << q1.front() << ' ';
	//	q1.pop();
	//}
	//cout << endl;

	system("pause");
	return 0;
}