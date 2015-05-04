// exemplo_pilha.cpp : Defines the entry point for the console application.
//

#include <stdio.h>
#include <stdlib.h>

#include<string.h>

#include "../DataStructure/Stack.h"


int testStack(void)
{
	
	ttag_StackNode* ptagPilha = NULL;
	int iAux = 0;

	Stack_push(&ptagPilha,1);
	Stack_push(&ptagPilha,2);
	Stack_push(&ptagPilha,3);
	Stack_push(&ptagPilha,4);
	Stack_push(&ptagPilha,5);
	Stack_push(&ptagPilha,6);
	Stack_push(&ptagPilha,7);

	iAux=Stack_pop(&ptagPilha);
	printf("\r\nPop = %d",iAux);
	iAux=Stack_pop(&ptagPilha);
	printf("\r\nPop = %d",iAux);
	iAux=Stack_pop(&ptagPilha);
	printf("\r\nPop = %d",iAux);
	iAux=Stack_pop(&ptagPilha);
	printf("\r\nPop = %d",iAux);
	iAux=Stack_pop(&ptagPilha);
	printf("\r\nPop = %d",iAux);
	iAux=Stack_pop(&ptagPilha);
	printf("\r\nPop = %d",iAux);
	iAux=Stack_pop(&ptagPilha);
	printf("\r\nPop = %d",iAux);
	iAux=Stack_pop(&ptagPilha);
	printf("\r\nPop = %d\r\n",iAux);

	return 0;
}
