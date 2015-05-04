// exemplo_lista_dup.cpp : Defines the entry point for the console application.
//

#include <stdio.h>
#include <stdlib.h>

#include<string.h>

#include "../DataStructure/DoublyLinkedList.h"

int testDoublyLinkedList(void)
{
	//Declaração e inicialização da lista
	ttag_List ptagList;
	ttag_DLLNode* pAux = NULL;
	
	//Criando sentinela
	ptagList.ptagSentinel = (ttag_DLLNode*)malloc(sizeof(ttag_DLLNode));
	if(ptagList.ptagSentinel)
	{
		ptagList.ptagSentinel->iChave = -10000;
		ptagList.ptagSentinel->ptagNext = ptagList.ptagSentinel;
		ptagList.ptagSentinel->ptagPrev = ptagList.ptagSentinel;
	}
	
	DLL_insert(&ptagList,1);
	DLL_insert(&ptagList,2);
	DLL_insert(&ptagList,3);
	DLL_insert(&ptagList,4);
	
	pAux = DLL_search(&ptagList,3);
	printf("\r\npAux->chave = %d",pAux->iChave);

	pAux = DLL_search(&ptagList,10);
	if(pAux == NULL)
		printf("\r\nChave = 10 não encontrada");

	pAux = DLL_search(&ptagList,3);
	DLL_remove(&ptagList,&pAux);
	pAux = DLL_search(&ptagList,3);
	if(pAux == NULL)
		printf("\r\nChave = 3 não encontrada");

	pAux = DLL_search(&ptagList,1);
	DLL_remove(&ptagList,&pAux);
	pAux = DLL_search(&ptagList,1);
	if(pAux == NULL)
		printf("\r\nChave = 1 não encontrada");

	pAux = DLL_search(&ptagList,12);
	DLL_remove(&ptagList,&pAux);

	return 0;
}




