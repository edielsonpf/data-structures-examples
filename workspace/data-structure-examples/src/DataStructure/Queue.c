/*
 * Queue.c
 *
 *  Created on: 04/05/2015
 *      Author: edielson
 */

#include <stdio.h>
#include <stdlib.h>

#include "Queue.h"

void Queue_enqueue (ttag_Queue* ptagQueue, int iData)
{
	ttag_QueueNode* ptagNew = (ttag_QueueNode*)malloc(sizeof(ttag_QueueNode));

	if(ptagNew)
	{
	    ptagNew->iChave = iData;
		ptagNew->ptagNext = NULL;

		if(ptagQueue->ptagLast == NULL) //The queue is empty
			ptagQueue->ptagFirst = ptagNew;
		else
			(ptagQueue->ptagLast)->ptagNext = ptagNew;

		ptagQueue->ptagLast = ptagNew;
	}
}

int Queue_dequeue (ttag_Queue* ptagQueue)
{
	int iData = -1;
	ttag_QueueNode* ptagNodeAux;

	if(ptagQueue->ptagFirst) //checking if is empty
	{
		ptagNodeAux = ptagQueue->ptagFirst;
		ptagQueue->ptagFirst = ptagNodeAux->ptagNext;
		iData = ptagNodeAux->iChave;
		free(ptagNodeAux);
		if(!ptagQueue->ptagFirst) ptagQueue->ptagLast = NULL;
	 }
	 return iData;
}
