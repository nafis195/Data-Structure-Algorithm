// Bismillahir Rahmanir Rahim
// Nafis Chowdhury
// Linked List
// Main.cpp



#include<iostream>
using namespace std;


//=============Node Structure==============
struct Node
{
	int data;
	Node* next;
};


//=============Creating the Head pointer===========
Node* head = NULL;


//==============Insert the Node at Start================
void InsertStart(int value)
{
	Node* ptr = new Node();
	ptr->data = value;
	ptr->next = head;
	head = ptr;
}


//=================Insert the Node at Middle===============
//void InsertMiddle(int value, int pos)
//{
//	Node* ptr = new Node();
//	ptr->data = value;
//
//}


//==============Insert the Node at End===================
void InsertEnd(int value)
{
	Node* ptr = new Node();
	ptr->data = value;
	ptr->next = NULL;

	if (head == NULL)
		head = ptr;
	else
	{
		Node* temp = head;
		while (temp->next != NULL)
			temp = temp->next;

		temp->next = ptr;
	}
}


//===============Display the Node from First to Last=====================
void display_from_first_to_last()
{
	Node* temp = head;
	while (temp != NULL)
	{
		cout << temp->data << " ";
		temp = temp->next;
	}
}


//=====================Recursive Function to Display the Node from First to Last=====================
void recursive_display_from_first_to_last(Node* root)
{
	Node* temp = new Node();
	temp = root;

	if (temp == NULL)
		return;
	else
	{
		cout << temp->data << " ";
		recursive_display_from_first_to_last(temp->next);
	}
}


//=====================Recursive Function to Display the Node from Last to First=====================
void recursive_display_from_last_to_first(Node* root)
{
	Node* temp = new Node();
	temp = root;

	if (temp == NULL)
		return;
	else
	{
		recursive_display_from_last_to_first(temp->next);
		cout << temp->data << " ";
	}
}


//============Counting the Nodes=========================
void counting_the_node(Node* root)
{
	Node* temp = new Node();
	temp = head;
	int count = 0;

	while (temp != NULL)
	{
		count++;
		temp = temp->next;
	}

	cout << count;
	count = 0;
}


//================Sum of the Node Elements===============
void Sum(Node* root)
{
	int sum = 0;
	Node* temp = new Node();
	temp = head;

	while (temp != NULL)
	{
		sum = sum + temp->data;
		temp = temp->next;
	}

	cout << sum;
	sum = 0;
}


//================Max Element=======================
int max_element(Node* root)
{
	int max = root->data;
	Node* temp = new Node();
	temp = root;

	while (temp != NULL)
	{
		if (temp->data > max)
			max = temp->data;
		else
			temp = temp->next;
	}

	return max;
}


//================Min Element=======================
int min_element(Node* root)
{
	int min = root->data;
	Node* temp = new Node();
	temp = root;

	while (temp != NULL)
	{
		if (temp->data < min)
			min = temp->data;
		else
			temp = temp->next;
	}

	return min;
}


//===================Searching FUnction================
bool Search(Node* root, int value)
{
	Node* temp = new Node();
	temp = head;

	while (temp != NULL)
	{
		if (temp->data == value)
			return true;
		else
			temp = temp->next;
	}

	return false;
}


//==================Main Function=======================
int main()
{
	InsertEnd(12);
	InsertEnd(10);
	InsertEnd(16);
	InsertEnd(14);
	InsertEnd(13);

	recursive_display_from_first_to_last(head);
	cout << endl;

	//recursive_display_from_last_to_first(head);
	//cout << endl;

	//counting_the_node(head);
	//cout << endl;

	//Sum(head);
	//cout << endl;

	/*cout << max_element(head) << endl;*/

	/*cout << min_element(head) << endl;*/

	if(Search(head, 160))
		cout << "Item is in the list" << endl;
	else
		cout << "Item is not in the list" << endl;

	return 0;
}