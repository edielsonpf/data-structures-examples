// exemplo_lista_ind_ligada.cpp : Defines the entry point for the console application.
//

#include <stdio.h>
#include <stdlib.h>

#include<string.h>

#include "../DataStructure/SinglyLinkedList.h"

int testSinglyLinkedList(void)
{
	//Declaração e inicialização da lista
	ttag_SLLNode* ptagList = NULL;
	ttag_SLLNode* pAux = NULL;
	
	SLL_insert(&ptagList,1);
	SLL_insert(&ptagList,2);
	SLL_insert(&ptagList,3);
	SLL_insert(&ptagList,4);
	
	pAux = SLL_search(&ptagList,3);
	printf("\r\npAux->chave = %d",pAux->iChave);

	pAux = SLL_search(&ptagList,10);
	if(pAux == NULL)
		printf("\r\nChave = 10 não encontrada");

	SLL_remove(&ptagList,3);
	pAux = SLL_search(&ptagList,3);
	if(pAux == NULL)
		printf("\r\nChave = 3 não encontrada");

	SLL_remove(&ptagList,12);

	return 0;
}




