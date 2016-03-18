/*
OVERVIEW: Given a single linked list, remove every Kth node in the linked list.
E.g.: 1->2->3->4->5 and K 2, output is 1->3->5.

INPUTS: A linked list and Value of K.

OUTPUT: Remove every Kth node in the linked list.

ERROR CASES: Return NULL for error cases.

NOTES:
*/

#include <stdio.h>

struct node {
	int num;
	struct node *next;
};

struct node * removeEveryKthNode(struct node *head, int K) {
	int count = 1;
	struct node *node,*start=NULL;
	node = head;
	start = node;
	if (K < 0 || head == NULL)
		return NULL;
	
	if (K == 1||K==0)
		head = NULL;
	
	else
	{
		while (node != NULL)
		{
			if (count == K-1 && node->next!=NULL)
			{
				node->next = node->next->next;
				node = node->next;
				count = 1;
			}
			else{
				node = node->next;
				count++;
			}
		}
		head = start;
	}
	return head;
}