
#include "stdafx.h"

typedef struct tag_node
{
	int nVal;
	struct tag_node* pNodeFather;
	struct tag_node* pNodeLeft;
	struct tag_node* pNodeRight;
}ttag_node;

typedef struct tag_BinaryTree
{
	ttag_node* ptagRootNode;
}ttag_BinarayTree;

Handle BinaryTree_CreateInstance(void);
void BinaryTree_Insert(Handle hHandle, ttag_node* pNode);
void BinaryTree_Print(Handle hBinaryTree);
ttag_node* BinaryTree_NewNode(int nVal);
void BinaryTree_Remove(Handle hTree, ttag_node* pNode);
ttag_node* BinaryTree_Search(Handle hTree, int nVal);