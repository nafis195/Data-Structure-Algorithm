// Bismillahir Rahmanir Rahim
// Nafis Chowdhury
// Main.cpp


#include"BST.h"
#include"BSTStruct.h"
using namespace std;

int main()
{
	BST bst;  // creating of an object of BST class

	bstnode* root = NULL;  // creating an empty tree

	// inserting element to the tree
	root = bst.insert(root, 15);
	root = bst.insert(root, 10);
	root = bst.insert(root, 20);
	root = bst.insert(root, 25);
	root = bst.insert(root, 8);
	root = bst.insert(root, 12);

	// level order or DFS
	bst.levelOrder(root);

	// preorder
	bst.preOrder(root);

	// inorder
	bst.inOrder(root);

	// postorder
	bst.postOrder(root);

	// searching
	int userInput;
	cout << "Please enter a number:- ";
	cin >> userInput;
	if (bst.search(root, userInput) == true)
		cout << "The number is in the tree." << endl;
	else
		cout << "The number is not in the tree." << endl;

	cout << endl;
	system("pause");
	return 0;
}