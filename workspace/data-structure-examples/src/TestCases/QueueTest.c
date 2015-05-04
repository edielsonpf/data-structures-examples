// exemplo_fila.cpp : Defines the entry point for the console application.
//

#include <stdio.h>
#include <stdlib.h>

#include<string.h>
#include "../DataStructure/Queue.h"

int testQueue(void)
{
	//Declaração e inicialização da fila
	ttag_Queue tagQueue;
	tagQueue.ptagFirst = NULL;
	tagQueue.ptagLast = NULL;
	int iAux = 0;
	
	Queue_enqueue(&tagQueue,1);
	Queue_enqueue(&tagQueue,2);
	Queue_enqueue(&tagQueue,3);
	Queue_enqueue(&tagQueue,4);
	Queue_enqueue(&tagQueue,5);
	Queue_enqueue(&tagQueue,6);
	Queue_enqueue(&tagQueue,7);

	iAux=Queue_dequeue(&tagQueue);
	printf("\r\ndequeue = %d",iAux);
	iAux=Queue_dequeue(&tagQueue);
	printf("\r\ndequeue = %d",iAux);
	iAux=Queue_dequeue(&tagQueue);
	printf("\r\ndequeue = %d",iAux);
	iAux=Queue_dequeue(&tagQueue);
	printf("\r\ndequeue = %d",iAux);
	iAux=Queue_dequeue(&tagQueue);
	printf("\r\ndequeue = %d",iAux);
	iAux=Queue_dequeue(&tagQueue);
	printf("\r\ndequeue = %d",iAux);
	iAux=Queue_dequeue(&tagQueue);
	printf("\r\ndequeue = %d",iAux);
	iAux=Queue_dequeue(&tagQueue);
	printf("\r\ndequeue = %d\r\n",iAux);
	return 0;
}



