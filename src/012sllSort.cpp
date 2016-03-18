/*
OVERVIEW:  Given a single linked list of 0s 1s and 2s ,Sort the SLL such that zeroes 
will be followed by ones and then twos.


INPUTS:  SLL head pointer

OUTPUT: Sorted SLL ,Head should Finally point to an sll of sorted 0,1,2


ERROR CASES:

NOTES: Only 0,1,2, will be in sll nodes
*/

#include <stdio.h>
#include <malloc.h>

struct node {
	int data;
	struct node *next;
};

void sll_012_sort(struct node *head){
	
	struct node *current;
	int *count=(int*)calloc(sizeof(int),3),k=0;
	current = head;
	while (current != NULL)
	{
		count[current->data]++;
		current = current->next;
	}
	current = head;
	for (k = 0; k < 3; k++)
	{
		while (count[k]!=0)
		{
			current->data = k;
			current = current->next;
			count[k]--;
		}
	}
}