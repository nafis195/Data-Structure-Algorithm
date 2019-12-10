// Bismillahir Rahmanir Rahim
// Nafis Chowdhury
// BST.h


#pragma once

#ifndef BST_H
#define BST_H

#include"BSTStruct.h"

class BST
{
public:
	bstnode* getNewNode(int data);  // to create new node
	bstnode* insert(bstnode* root, int data);  // to insert data in BST
	bool search(bstnode* root, int data);  // to search element in BST
	void levelOrder(bstnode* root);  // level order traversal or DFS
	void preOrder(bstnode* root);  // preorder traversal
	void inOrder(bstnode* root);  // inorder traversal
	void postOrder(bstnode* root);  // postorder traversal
};

#endif 