// Bismillahir Rahmanir Rahim
// Nafis Chowdhury
// BST.cpp


#include"BST.h"
#include"BSTStruct.h"
using namespace std;

// to create new node
bstnode* BST::getNewNode(int data)
{
	bstnode* newNode = new bstnode();
	newNode->data = data;
	newNode->left = NULL;
	newNode->right = NULL;
	return newNode;
}

// to insert data in BST
bstnode* BST::insert(bstnode* root, int data)
{
	if (root == NULL)  // while the BST is empty
		getNewNode(data);
	else if (data <= root->data)  // while data is lesser than root data, then insert in the left subtree
		insert(root->left, data);
	else  // while data is greater than root data, then insert in the right subtree
		insert(root->right, data);
	return root;
}

// to search element in BST
bool BST::search(bstnode* root, int data)
{
	if (root == NULL)  // while root is null, then no data in the tree, so return false
		return false;
	else if (data <= root->data)  // while data is lesser than root data, then search in the left subtree
		search(root->left, data);
	else if (data > root->data)  // while data is greater than root data, then search in the right subtree
		search(root->right, data);
	else  // while data == root->data, then return true
		return true;
}

// level order traversal or DFS
void BST::levelOrder(bstnode* root)
{
	if (root == NULL)
		return;

	queue <bstnode*> BSTQ;
	BSTQ.push(root);
	
	while (!BSTQ.empty())
	{
		bstnode* current = BSTQ.front();
		BSTQ.pop();
		cout << current->data << ' ';
		if (current->left != NULL)
			BSTQ.push(current->left);
		if (current->right != NULL)
			BSTQ.push(current->right);
	}
}

// preorder traversal
void BST::preOrder(bstnode* root)
{
	if (root == NULL)
		return;

	cout << root->data << ' ';  // printing data
	preOrder(root->left);  // visting left subtree
	preOrder(root->right);  // visiting right subtree
}

// inorder traversal
void BST::inOrder(bstnode* root)
{
	if (root == NULL)
		return;

	inOrder(root->left);  // visiting left subtree
	cout << root->data << ' ';  // printing data
	inOrder(root->right);  // visiting right subtree
}

// postorder traversal
void BST::postOrder(bstnode* root)
{
	if (root == NULL)
		return;

	postOrder(root->left);  // visiting left subtree
	postOrder(root->right);  // visiting right subtree
	cout << root->data << ' ';  // printing data
}