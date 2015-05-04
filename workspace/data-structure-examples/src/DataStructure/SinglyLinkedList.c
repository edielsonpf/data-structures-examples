/*
 * SinglyLinkedList.c
 *
 *  Created on: 04/05/2015
 *      Author: edielson
 */

#include <stdio.h>
#include <stdlib.h>

#include "SinglyLinkedList.h"

void SLL_insert (ttag_SLLNode** ptagList, int iData)
{
	ttag_SLLNode* ptagNew = (ttag_SLLNode*)malloc(sizeof(ttag_SLLNode));

	if(ptagNew)
	{
		ptagNew->iChave = iData;
		ptagNew->ptagNext = *ptagList;
		*ptagList = ptagNew;
	}
}


void SLL_remove (ttag_SLLNode** ptagList, int iData)
{
    ttag_SLLNode* ptagNodeRun = *ptagList;
	ttag_SLLNode* ptagNodeLast = NULL;

	while(ptagNodeRun) //searching for node in the list
	{
		if(ptagNodeRun->iChave == iData) break;
   		ptagNodeLast = ptagNodeRun;
		ptagNodeRun = ptagNodeRun->ptagNext;
	}

	if(ptagNodeRun) //Node was found
	{
	   	if(ptagNodeLast) //Middle of the list
	   	{
			ptagNodeLast->ptagNext = ptagNodeRun->ptagNext;
        }
		else		//first of the list
        {
			*ptagList = ptagNodeRun->ptagNext;
 		}
 		free(ptagNodeRun);
	 }
}


ttag_SLLNode* SLL_search (ttag_SLLNode** ptagList, int iData)
{
	ttag_SLLNode* ptagNodeAux = *ptagList;

	while((ptagNodeAux)&&(iData != ptagNodeAux->iChave))
	{
		ptagNodeAux = ptagNodeAux->ptagNext;
	}
	return  ptagNodeAux;
}
