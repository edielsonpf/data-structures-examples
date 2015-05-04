/*
 * SinglyLinkedList.h
 *
 *  Created on: 04/05/2015
 *      Author: edielson
 */

#ifndef SINGLYLINKEDLIST_H_
#define SINGLYLINKEDLIST_H_

typedef struct tag_SLLNode
{
	int iChave;
	struct tag_SLLNode* ptagNext;

}ttag_SLLNode;

void SLL_insert (ttag_SLLNode** ptagList, int iData);
void SLL_remove (ttag_SLLNode** ptagList, int iData);
ttag_SLLNode* SLL_search (ttag_SLLNode** ptagList, int iData);

#endif /* SINGLYLINKEDLIST_H_ */
