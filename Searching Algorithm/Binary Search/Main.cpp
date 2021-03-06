// Bismillahir Rahmanir Rahim
// Nafis Chowdhury
// Binary Search
// Main.cpp

#include<iostream>
using namespace std;

// binarySearch function
int binarySearch(int A[], int arraySize, int searchingNumber)
{
	int left = 0;
	int right = arraySize - 1;
	int mid;

	while (left <= right)
	{
		mid = (left + right) / 2;
		if (A[mid] == searchingNumber)
			return mid;

		if (A[mid] < searchingNumber)
			left = mid + 1;
		else
			right = mid - 1;
	}
	return -1;
}

// main function
int main()
{
	int initialArray[] = { 1, 14, 27, 45, 55, 78 }; // make sure the array is already sorted. This is the requirement of binary search. Otherwise it will not work.
	int arraySize = sizeof(initialArray);
	int container = binarySearch(initialArray, arraySize, 78);

	if (container == -1)
		cout << "Item is not found." << endl;
	else
		cout << "Item is found at " << container << " index." << endl;

	system("pause");
	return 0;
}