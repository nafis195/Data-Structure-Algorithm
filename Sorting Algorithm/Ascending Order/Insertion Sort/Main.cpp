// Bismillahir Rahmanir Rahim
// Nafis Chowdhury
// Insertion Sort Ascending Order
// Main.cpp

#include<iostream>
using namespace std;

// function templates
void insertion_sort(int A[], int arraySize);
void display(int A[], int arraySize);

// main function
int main()
{
	int initialArray[] = { 65, 45, 1, 78, 56, 21, 4, 33, 2 };
	int arraySize = sizeof(initialArray) / sizeof(initialArray[0]);

	// array before sorting
	cout << "Array before sorting:- ";
	display(initialArray, arraySize);

	//array after sorting
	cout << "Array after sorting:- ";
	insertion_sort(initialArray, arraySize);
	display(initialArray, arraySize);

	system("pause");
	return 0;
}

// insertion_sort function
void insertion_sort(int A[], int arraySize)
{
	int i, j, temp;

	for (i = 1; i < arraySize; i++)
	{
		temp = A[i];
		j = i - 1;
		while (j >= 0 && A[j] > temp)
		{
			A[j + 1] = A[j];
			j = j - 1;
		}
		A[j + 1] = temp;
	}
}

// display function
void display(int A[], int arraySize)
{
	for (int i = 0; i < arraySize; i++)
		cout << A[i] << ' ';
	cout << endl;
}