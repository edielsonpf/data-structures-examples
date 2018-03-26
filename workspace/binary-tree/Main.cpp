
#include "stdafx.h"
#include "BinaryTree.h"
using namespace std;

int main(void)
{
	int iVal;
	char cOp = 's';

	Handle hTree = BinaryTree_CreateInstance();
	if(hTree)	cout << "Tree allocated with success" << endl;
	else
	{		
		cout<<"Error!"<<endl;
		cOp = 'e'; 
	}
	while(cOp != 'e')
	{
		cout << "Enter with an option ('i' - insert, 'r' - remove, 'p' - print and 'e' - exit): ";
		cin >> cOp;

		if (cOp == 'i')
		{
			cout << "Enter with a number to insert: ";
			cin >> iVal;
			ttag_node* pNewNode = BinaryTree_NewNode(iVal);
			BinaryTree_Insert(hTree, pNewNode);
			//cout << "Number: "<<iVal<<"\r\n";
		}
		else if (cOp == 'r')
		{
			cout << "Enter with a number to delete: ";
			cin >> iVal;

			ttag_node* pNode = BinaryTree_Search(hTree, iVal);
			BinaryTree_Remove(hTree, pNode);
		}
		else if (cOp == 'p')
		{
			BinaryTree_Print(hTree);
		}
		else
		{
			cout << "The end!\r\n";
			cin >> cOp;
		}
	}
	
	cout << "\r\nPress any key to exit!";
	cin >> cOp;
	return 0;
}