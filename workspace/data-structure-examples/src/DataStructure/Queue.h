/*
 * Queue
 *
 *  Created on: 04/05/2015
 *      Author: edielson
 */
#ifndef QUEUE_H_
#define QUEUE_H_

typedef struct tag_QueueNode
{
	int iChave;
	struct tag_QueueNode* ptagNext;
}ttag_QueueNode;

typedef struct tag_Queue
{
	ttag_QueueNode* ptagFirst;
	ttag_QueueNode* ptagLast;
}ttag_Queue;

void Queue_enqueue (ttag_Queue* ptagQueue, int iData);
int Queue_dequeue (ttag_Queue* ptagQueue);

#endif /* QUEUE_H_ */
