/*
 ============================================================================
 Name        : data-structure-examples.c
 Author      : Edielson P. Frigieri
 Version     :
 Copyright   : 
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

#include "TestCases/CircularLinkedListTest.h"
#include "TestCases/SinglyLinkedListTest.h"
#include "TestCases/DoublyLinkedListTest.h"
#include "TestCases/QueueTest.h"
#include "TestCases/StackTest.h"

int main(void)
{
	puts("!!!Queue Test!!!\n");
	testQueue();

	puts("!!!Stack Test!!!\n");
	testStack();

	puts("!!!Singly Linked List Test!!!\n");
	testSinglyLinkedList();

	puts("!!!Doubly Linked List Test!!!\n");
	testDoublyLinkedList();

	puts("!!!Circular Linked List Test!!!\n");
	testCirculatLinkedList();

	return EXIT_SUCCESS;
}
