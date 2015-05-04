// exemplo_lista_circular.cpp : Defines the entry point for the console application.
//

#include <stdio.h>
#include <stdlib.h>

#include <string.h>

#include "../DataStructure/CircularLinkedList.h"

int testCirculatLinkedList(void)
{
	//Declaração e inicialização da lista
	ttag_CLLNode* ptagList = NULL;
	ttag_CLLNode* pAux = NULL;
	
	printf("Inserting: 1\n");
	CLL_insert(&ptagList,1);
	printf("Inserting: 2\n");
	CLL_insert(&ptagList,2);
	printf("Inserting: 3\n");
	CLL_insert(&ptagList,3);
	printf("Inserting: 4\n");
	CLL_insert(&ptagList,4);

	pAux=NULL;

	printf("Listing all nodes in the list\n");
	if(ptagList!=NULL) pAux=ptagList->ptagNext;
	while(pAux!=ptagList && pAux!=NULL)
	{
		printf("key = %d\n",pAux->iChave);
		pAux=pAux->ptagNext;
	}
	printf("key = %d\n",pAux->iChave);
	
	printf("Searching key = 3...");
	pAux = CLL_search(&ptagList,3);
	if(pAux)
		printf("Success: %d\n",pAux->iChave);
	else
		printf("Error, key = 3 not found\n");

	printf("Searching key = 10...");
	pAux = CLL_search(&ptagList,10);
	if(pAux == NULL)
		printf("Error, key = 10 not found!\n");
	else
		printf("Success: %d\n",pAux->iChave);

	printf("Removing key = 3\n");
	CLL_remove(&ptagList,3);
	printf("Searching key = 3...");
	pAux = CLL_search(&ptagList,3);
	if(pAux)
		printf("Success: %d\n",pAux->iChave);
	else
		printf("Error, key = 3 not found\n");

	printf("Removing key = 1\n");
	CLL_remove(&ptagList,1);
	printf("Searching key = 1...");
	pAux = CLL_search(&ptagList,1);
	if(pAux)
		printf("Success: %d\n",pAux->iChave);
	else
		printf("Error, key = 1 not found\n");

	printf("Removing key = 12\n");
	CLL_remove(&ptagList,12);

	printf("Searching key = 2...");
	pAux = CLL_search(&ptagList,2);
	if(pAux)
		printf("Success: %d\n",pAux->iChave);
	else
		printf("Error, key = 2 not found\n");

	printf("Listing all nodes in the list\n");
	pAux=NULL;
	if(ptagList!=NULL) pAux=ptagList->ptagNext;
	while(pAux!=ptagList && pAux!=NULL)
	{
		printf("pAux->chave = %d\n",pAux->iChave);
		pAux=pAux->ptagNext;
	}
	printf("\r\npAux->chave = %d\n",pAux->iChave);

	return 0;
}






