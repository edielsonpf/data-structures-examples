/*
 * Stack.c
 *
 *  Created on: 04/05/2015
 *      Author: edielson
 */

#include <stdio.h>
#include <stdlib.h>

#include "Stack.h"

void Stack_push (ttag_StackNode** ptagStack, int iData)
{
	ttag_StackNode* ptagNew = (ttag_StackNode*)malloc(sizeof(ttag_StackNode));

	if(ptagNew)
	{
		ptagNew->iChave = iData;
		ptagNew->ptagNext = *ptagStack;
		*ptagStack = ptagNew;
	}
}

int Stack_pop (ttag_StackNode** ptagStack)
{
	int iData = -1;
	ttag_StackNode* ptagNodeAux;

	if(*ptagStack != NULL) // checking if the list is empty
	{
			ptagNodeAux = *ptagStack;
			*ptagStack = ptagNodeAux->ptagNext;
			iData = ptagNodeAux->iChave;
 			free(ptagNodeAux);
	}
	return iData;
}
