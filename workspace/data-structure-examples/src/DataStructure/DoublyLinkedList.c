/*
 * DoublyLinkedList.c
 *
 *  Created on: 04/05/2015
 *      Author: edielson
 */

#include <stdio.h>
#include <stdlib.h>
#include "DoublyLinkedList.h"

void DLL_insert (ttag_List* ptagList, int iData)
{
	ttag_DLLNode* ptagNew = (ttag_DLLNode*)malloc(sizeof(ttag_DLLNode));

	if(ptagNew)
	{
		ptagNew->iChave = iData;
		ptagNew->ptagNext = ptagList->ptagSentinel->ptagNext;
		ptagList->ptagSentinel->ptagNext->ptagPrev = ptagNew;
		ptagList->ptagSentinel->ptagNext = ptagNew;
		ptagNew->ptagPrev = ptagList->ptagSentinel;
	}
}


void DLL_remove (ttag_List* ptagList, ttag_DLLNode** pNode)
{
	if(!(*pNode)) return;

	((*pNode)->ptagPrev)->ptagNext = ((*pNode)->ptagNext);
	((*pNode)->ptagNext)->ptagPrev = ((*pNode)->ptagPrev);

	free((*pNode));
}


ttag_DLLNode* DLL_search (ttag_List* ptagList, int iData)
{
	ttag_DLLNode* ptagNodeRun = ptagList->ptagSentinel->ptagNext;

	while((ptagNodeRun!=ptagList->ptagSentinel)&&(ptagNodeRun->iChave != iData)) //searching for node in the list
	{
		ptagNodeRun = ptagNodeRun->ptagNext;
	}
	if(ptagNodeRun->iChave==iData) return ptagNodeRun;
	else return NULL;
}
