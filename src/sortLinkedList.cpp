/*
OVERVIEW: Given an unsorted single linked list, sort the linked list without using extra array or linked list.
E.g.: 4->2->1->5->3, output is 1->2->3->4->5.

INPUTS: An unsorted single linked list.

OUTPUT: Sort the linked list.

ERROR CASES: Return NULL for error cases.

NOTES: Without using extra array or linked list.
*/

#include <stdio.h>

struct node {
	int num;
	struct node *next;
};

struct node * sortLinkedList(struct node *head) {

	struct node *start,*current,*current1;
	int n;
	if (head == NULL)
		return NULL;
	if (head->next == NULL)
		return head;
	
	start = head;
	current1 = head;

	while (current1!=NULL)
	{
		current = head;
		while (current != NULL)
		{
			if (current->next!=NULL && current->num > current->next->num)
			{
				n = current->num;
				current->num = current->next->num;
				current->next->num = n;
				
			}
			current = current->next;
		}
		current1 = current1->next;
	}
	return head;
}