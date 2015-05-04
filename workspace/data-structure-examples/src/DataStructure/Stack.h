/*
 * Stack.h
 *
 *  Created on: 04/05/2015
 *      Author: edielson
 */

#ifndef STACK_H_
#define STACK_H_

typedef struct tag_StackNode
{
	int iChave;
	struct tag_StackNode* ptagNext;

}ttag_StackNode;

void Stack_push (ttag_StackNode** ptagStack, int iData);
int Stack_pop (ttag_StackNode** ptagStack);

#endif /* STACK_H_ */
