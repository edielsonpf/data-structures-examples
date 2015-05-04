/*
 * CircularLinkedList.c
 *
 *  Created on: 04/05/2015
 *      Author: edielson
 */

#include <stdio.h>
#include <stdlib.h>
#include "CircularLinkedList.h"

void CLL_insert (ttag_CLLNode** ptagList, int iData)
{
	ttag_CLLNode* ptagNew = (ttag_CLLNode*)malloc(sizeof(ttag_CLLNode));

	if(ptagNew)
	{
		ptagNew->iChave = iData;

		if((*ptagList) == NULL)//first and last element
			ptagNew->ptagNext = ptagNew;
		else
		{
			ptagNew->ptagNext = (*ptagList)->ptagNext;
			(*ptagList)->ptagNext=ptagNew;

		}
		(*ptagList)=ptagNew;

	}
}


void CLL_remove (ttag_CLLNode** ptagList, int iData)
{
	ttag_CLLNode* ptagNodeRun = (*ptagList)->ptagNext;
	ttag_CLLNode* ptagNodeLast = (*ptagList);

	while((ptagNodeRun!=*ptagList)&&(ptagNodeRun->iChave != iData)) //searching for node in the list
	{
		ptagNodeLast = ptagNodeRun;
		ptagNodeRun = ptagNodeRun->ptagNext;
	}

	if(ptagNodeRun->iChave == iData) //Node was found
	{
	   	ptagNodeLast->ptagNext = ptagNodeRun->ptagNext;

		if(ptagNodeRun==*ptagList) //End of the list
	   	{
			*ptagList = ptagNodeLast;
        }
		free(ptagNodeRun);
	 }
}


ttag_CLLNode* CLL_search (ttag_CLLNode** ptagList, int iData)
{
	ttag_CLLNode* ptagNodeRun = (*ptagList)->ptagNext;
//	ttag_CLLNode* ptagNodeLast = NULL;

	while((ptagNodeRun!=*ptagList)&&(ptagNodeRun->iChave != iData)) //searching for node in the list
	{
//		ptagNodeLast = ptagNodeRun;
		ptagNodeRun = ptagNodeRun->ptagNext;
	}
	if(ptagNodeRun->iChave==iData) return ptagNodeRun;
	else return NULL;
}
