// Bismillahir Rahmanir Rahim
// Nafis Chowdhury
// Stack Using Build in Data Structure
// Main.cpp

#include<iostream>
#include<stack>
using namespace std;

int main()
{
	stack<int>s1;
	s1.push(2);
	s1.push(4);
	s1.push(10);
	s1.push(7);

	while (!s1.empty())
	{
		cout << s1.top() << ' ';
		s1.pop();
	}
	cout << endl;

	system("pause");
	return 0;
}