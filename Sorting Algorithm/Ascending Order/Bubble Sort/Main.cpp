// Bismillahir Rahmanir Rahim
// Nafis Chowdhury
// Bubble Sort Ascending Order
// Main.cpp

#include<iostream>
using namespace std;

// function templates
void bubble_sort(int A[], int arraySize);
void swap(int* x, int* y);
void display(int A[], int arraySize);

// main function
int main()
{
	int initialArray[] = { 5, 12, 47, 1, 6, 13, 65, 4 };
	int arraySize = sizeof(initialArray) / sizeof(initialArray[0]);

	// array before sorting
	cout << "Array before sorting:- ";
	display(initialArray, arraySize);

	// array after sorting
	cout << "Array after sorting:- ";
	bubble_sort(initialArray, arraySize);
	display(initialArray, arraySize);

	system("pause");
	return 0;
}

// bubble_sort function
void bubble_sort(int A[], int arraySize)
{
	int i, j, temp;  // temp is only needed if I don't use swap function

	for (i = 0; i < arraySize; i++)
	{
		for (j = 0; j < arraySize - i - 1; j++)
		{
			if (A[j] > A[j + 1])
			{
				swap(&A[j], &A[j + 1]);  // calling swap function

				// following can be used instead of swap function
				// temp = A[j];
				// A[j] = A[j + 1];
				// A[j + 1] = temp;
			}
		}
	}
}

// swap function
void swap(int* x, int* y)
{
	int temp;
	temp = *x;
	*x = *y;
	*y = temp;
}

// display function
void display(int A[], int arraySize)
{
	for (int i = 0; i < arraySize; i++)
		cout << A[i] << ' ';
	cout << endl;
}