// Bismillahir Rahmanir Rahim
// Nafis Chowdhury
// Linear Search
// Main.cpp

#include<iostream>
using namespace std;

// linearSearch function
int linearSearch(int A[], int arraySize, int searchingNumber)
{
	for (int i = 0; i < arraySize; i++)
	{
		if (A[i] == searchingNumber)
			return i;
	}
	
	return -1;
}

// main function
int main()
{
	int initialArray[] = {1, 47, 10, 78, 66, 14};
	int arraySize = sizeof(initialArray);
	int container = linearSearch(initialArray, arraySize, 14);

	if (container == -1)
		cout << "The item is not found." << endl;
	else
		cout << "The item is found at " << container << " index." << endl;

	system("pause");
	return 0;
}