// Bismillahir Rahmanir Rahim
// Nafis Chowdhury
// Selection Sort Ascending Order
// Main.cpp

#include<iostream>
using namespace std;

// function templates
void selection_sort(int A[], int arraySize);
void swap(int* x, int* y);
void display(int A[], int arraySize);

// main function
int main()
{
	int initialArray[] = { 21, 45, 13, 4, 7, 65, 9 };
	int arraySize = sizeof(initialArray) / sizeof(initialArray[0]);

	// display the array before sorting
	cout << "Array before sorted:- ";
	display(initialArray, arraySize);  

	// display the array after sorting
	cout << "Array after sorted:- ";
	selection_sort(initialArray, arraySize);
	display(initialArray, arraySize); 

	system("pause");
	return 0;
}

// slection_sort function
void selection_sort(int A[], int arraySize)
{
	int i, j, index_min, temp;  // temp is only needed if I don't use the swap function

	for (i = 0; i < arraySize - 1; i++)
	{
		index_min = i;
		for (j = i + 1; j < arraySize; j++)
		{
			if (A[j] < A[index_min])
				index_min = j;
		}
		if (index_min != i)
		{
			swap(&A[i], &A[index_min]);  // calling swap function here

			// following will also work if I don't use swap function
			// temp = A[i];
			// A[i] = A[index_min];
			// A[index_min] = temp;
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