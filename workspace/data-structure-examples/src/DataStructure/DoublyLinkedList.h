/*
 * DoublyLinkedList.h
 *
 *  Created on: 04/05/2015
 *      Author: edielson
 */

#ifndef DOUBLYLINKEDLIST_H_
#define DOUBLYLINKEDLIST_H_

typedef struct tag_DLLNode
{
	int iChave;
	struct tag_DLLNode* ptagNext;
	struct tag_DLLNode* ptagPrev;
}ttag_DLLNode;

typedef struct tag_List
{
	ttag_DLLNode* ptagSentinel;
}ttag_List;

void DLL_insert (ttag_List* ptagList, int iData);
void DLL_remove (ttag_List* ptagList, ttag_DLLNode** pNode);
ttag_DLLNode* DLL_search (ttag_List* ptagList, int iData);

#endif /* DOUBLYLINKEDLIST_H_ */
