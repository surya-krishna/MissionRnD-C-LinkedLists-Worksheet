/*
OVERVIEW:  Given a number convert that to single linked list (each digit as a node).
E.g.: Input: 234, Output: 2->3->4.

INPUTS:  A number.

OUTPUT: Create linked list from given number, each digit as a node.

ERROR CASES: 

NOTES: For negative numbers ignore negative sign.
*/

#include <stdio.h>
#include <malloc.h>

struct node {
	int num;
	struct node *next;
};

struct node * numberToLinkedList(int N) {
	struct node *node;
	struct node *start, *current;
	int q, r;
	
	start = NULL;
	current = NULL;
	if (N == 0)
	{
		current = (struct node*)malloc(sizeof(struct node));
		current->num = 0;
		current->next = 0;
	}
	if (N>=0)
	q = N;
	else
	{
		q = -N;
	}
	while (q != 0)
	{
		
		r = q % 10;
		q = q / 10;
		if (start == NULL)
		{
			start = (struct node*)malloc(sizeof(struct node));
			start->num = r;
			start->next = NULL;
			current = start;
		}
		else
		{
			node = (struct  node*)malloc(sizeof(struct node));
		    node->next = current;
			node->num = r;
			current = node;
		}
	}
	

	return current;
}