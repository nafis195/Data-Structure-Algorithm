// Bismillahir Rahmanir Rahim
// Nafis Chowdhury
// Sorting Algorithm
// Date - 11/10/2020
// Time - 11:44 AM
// Main.cpp





#include<iostream>
using namespace std;


//=============Function Templates==============
void Display(int A[], int size);
//void Swap(int* x, int* y);
void Bubble_Sort(int A[], int size);
void Insertion_Sort(int A[], int size);
void Selection_Sort(int A[], int size);


//================Main Function===============
int main()
{
	int myArray[] = { 8, 5, 7, 3, 2 };
	int arraySize = sizeof(myArray) / sizeof(myArray[0]);
	Display(myArray, arraySize);

	//Bubble_Sort(myArray, arraySize);
	//Display(myArray, arraySize);

	//Insertion_Sort(myArray, arraySize);
	//Display(myArray, arraySize);

	Selection_Sort(myArray, arraySize);
	Display(myArray, arraySize);

	return 0;
}


//============Display Function===================
void Display(int A[], int size)
{
	for (int i = 0; i < size; i++)
		cout << A[i] << " ";

	cout << endl;
}


//============Swap Function===================
//void Swap(int* x, int* y)
//{
//	int temp = *x;
//	*x = *y;
//	*y = temp;
//}


//============Function for Bubble Sort==============
void Bubble_Sort(int A[], int size)
{
	int flag;

	for (int i = 0; i < size - 1; i++)
	{
		flag = 0;

		for (int j = 0; j < size - 1 - i; j++)
		{
			if (A[j] > A[j + 1])
			{
				swap(A[j], A[j + 1]);
				flag = 1;
			}
		}

		if (flag == 0)
			break;
	}
}


//============Function for Insertion Sort==============
void Insertion_Sort(int A[], int size)
{
	int j;
	int x;

	for (int i = 0; i < size; i++)
	{
		j = i - 1;
		x = A[i];

		while (j >= 0 && A[j] > x)
		{
			A[j + 1] = A[j];
			j--;
		}

		A[j + 1] = x;
	}
}


//============Function for Selection Sort==============
void Selection_Sort(int A[], int size)
{
	int j;
	int k;

	for (int i = 0; i < size; i++)
	{
		for (j = k = i; j < size; j++)
		{
			if (A[j] < A[k])
				k = j;
		}

		swap(A[i], A[k]);
	}
}