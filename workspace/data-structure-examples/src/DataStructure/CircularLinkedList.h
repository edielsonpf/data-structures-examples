/*
 * CircularLinkedList.h
 *
 *  Created on: 04/05/2015
 *      Author: edielson
 */

#ifndef CIRCULARLINKEDLIST_H_
#define CIRCULARLINKEDLIST_H_

typedef struct tag_CLLNode
{
	int iChave;
	struct tag_CLLNode* ptagNext;

}ttag_CLLNode;

void CLL_insert (ttag_CLLNode** ptagList, int iData);
void CLL_remove (ttag_CLLNode** ptagList, int iData);
ttag_CLLNode* CLL_search (ttag_CLLNode** ptagList, int iData);

#endif /* CIRCULARLINKEDLIST_H_ */
