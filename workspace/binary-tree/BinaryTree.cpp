// BinaryTree.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
using namespace std;
#include "BinaryTree.h"

ttag_BinarayTree BinaryTree = {NULL};


static void BinaryTree_Transplant(Handle hTree, ttag_node* pNodeDest, ttag_node* pNodeSrc);
static void BinaryTree_DeleteNode(ttag_node* pNode);
static void BinaryTree_PrintInOrder(ttag_node* pRoot);
static void BinaryTree_PrintPreOrder(ttag_node* pRoot);
static void BinaryTree_Transplant(Handle hTree, ttag_node* pNodeDest, ttag_node* pNodeSrc);
static ttag_node* BinaryTree_Successor(ttag_node* pNode);


Handle BinaryTree_CreateInstance(void)
{
	return (Handle)(&BinaryTree);
}

ttag_node* BinaryTree_NewNode(int nVal)
{
	ttag_node* ptagNewNode = (ttag_node*)malloc(sizeof(ttag_node));
	ptagNewNode->nVal = nVal;
	ptagNewNode->pNodeFather = NULL;
	ptagNewNode->pNodeLeft = NULL;
	ptagNewNode->pNodeRight = NULL;
	return ptagNewNode;
}

void BinaryTree_Insert(Handle hBinaryTree, ttag_node* ptagNewNode )
{
	if(!hBinaryTree) return;
	
	ttag_BinarayTree* pBinaryTree = (ttag_BinarayTree*)hBinaryTree;
	ttag_node* pFather = NULL;
	ttag_node* pAux = pBinaryTree->ptagRootNode;
	

	while(pAux)
	{
		pFather = pAux;
		if(ptagNewNode->nVal <= pAux->nVal)	pAux = pAux->pNodeLeft;
		else								pAux = pAux->pNodeRight;
	}
	
	if (!pFather)
	{
		pBinaryTree->ptagRootNode = ptagNewNode;
	}
	else
	{
		if (ptagNewNode->nVal <= pFather->nVal) pFather->pNodeLeft = ptagNewNode;
		else									pFather->pNodeRight = ptagNewNode;
		ptagNewNode->pNodeFather = pFather;
	}
}

void BinaryTree_Print(Handle hBinaryTree)
{
	if (!hBinaryTree) return;
	ttag_BinarayTree* ptagTree = (ttag_BinarayTree*)hBinaryTree;
	cout << "In Order" << endl;
	BinaryTree_PrintInOrder(ptagTree->ptagRootNode);
	cout << endl;
	cout << "Pre Order" << endl;
	BinaryTree_PrintPreOrder(ptagTree->ptagRootNode);
	cout << endl;
}

void BinaryTree_Remove(Handle hTree, ttag_node* pNode)
{
	if (hTree == NULL) return;
	if (pNode == NULL) return;

	ttag_BinarayTree* pTree = (ttag_BinarayTree*)hTree;

	if (pNode->pNodeLeft == NULL)
	{
		BinaryTree_Transplant(hTree, pNode, pNode->pNodeRight);
	}
	else if (pNode->pNodeRight == NULL)
	{
		BinaryTree_Transplant(hTree, pNode, pNode->pNodeLeft);
	}
	else
	{
		ttag_node* pSuccessor = BinaryTree_Successor(pNode);
		if (pSuccessor->pNodeFather != pNode)
		{
			BinaryTree_Transplant(hTree, pSuccessor, pSuccessor->pNodeRight);
			pSuccessor->pNodeRight = pNode->pNodeRight;
			(pSuccessor->pNodeRight)->pNodeFather = pSuccessor;
		}
		BinaryTree_Transplant(hTree, pNode, pSuccessor);
		pSuccessor->pNodeLeft = pNode->pNodeLeft;
		(pSuccessor->pNodeLeft)->pNodeFather = pSuccessor;
	}
	BinaryTree_DeleteNode(pNode);
}

ttag_node* BinaryTree_Search(Handle hTree, int nVal)
{
	if (hTree == NULL) return NULL;
	ttag_BinarayTree* pTree = (ttag_BinarayTree*)hTree;
	ttag_node* pNodeAux = pTree->ptagRootNode;
	while ((pNodeAux != NULL) && (pNodeAux->nVal != nVal))
	{
		if (pNodeAux->nVal > nVal) pNodeAux = pNodeAux->pNodeLeft;
		else					   pNodeAux = pNodeAux->pNodeRight;
	}
	return pNodeAux;
}

static void BinaryTree_PrintPreOrder(ttag_node* pRoot)
{
	if (!pRoot) return;
	cout << pRoot->nVal << " ";
	if (pRoot->pNodeLeft)BinaryTree_PrintPreOrder(pRoot->pNodeLeft);
	if (pRoot->pNodeRight)BinaryTree_PrintPreOrder(pRoot->pNodeRight);
}

static void BinaryTree_PrintInOrder(ttag_node* pRoot)
{
	if (!pRoot) return;
	if (pRoot->pNodeLeft)BinaryTree_PrintInOrder(pRoot->pNodeLeft);
	cout << pRoot->nVal << " ";
	if (pRoot->pNodeRight)BinaryTree_PrintInOrder(pRoot->pNodeRight);
}

static void BinaryTree_iterativeInOrder(ttag_node* pRoot) 
{
    if (!pRoot) return;
        
	stack<ttag_node*> nodeStack;
	ttag_node* curr = pRoot;
    
	while (true)
	{
		if (curr) 
		{
            nodeStack.push(curr);
			curr = curr->pNodeLeft;
            continue;
        }   
        if (!nodeStack.size()) return;
                   
        curr = nodeStack.top();
        nodeStack.pop();
		cout << curr->nVal << " ";
		curr = curr->pNodeRight;
    }
}

static ttag_node* BinaryTree_Successor(ttag_node* pNode)
{
	if (pNode == NULL) return NULL;
	if (pNode->pNodeRight == NULL) return NULL;

	ttag_node* pSuccessor = pNode->pNodeRight;

	while(pSuccessor->pNodeLeft != NULL)
	{
		pSuccessor = pSuccessor->pNodeLeft;
	}
	return pSuccessor;
}

static void BinaryTree_Transplant(Handle hTree, ttag_node* pNodeDest, ttag_node* pNodeSrc)
{
	if (hTree == NULL) return;
	ttag_BinarayTree* pTree = (ttag_BinarayTree*)hTree;

	if (pNodeDest->pNodeFather == NULL)
	{
		pTree->ptagRootNode = pNodeSrc;
	}
	else
	{
		if ((pNodeDest->pNodeFather)->pNodeLeft == pNodeDest)
			(pNodeDest->pNodeFather)->pNodeLeft = pNodeSrc;
		else
			(pNodeDest->pNodeFather)->pNodeRight = pNodeSrc;
	}
	if (pNodeSrc)
		pNodeSrc->pNodeFather = pNodeDest->pNodeFather;
}

static void BinaryTree_DeleteNode(ttag_node* pNode)
{
	if (pNode) free(pNode);
}
