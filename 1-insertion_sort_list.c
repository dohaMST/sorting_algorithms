#include "sort.h"

/**
 * insertion_sort_list - Sorts a doubly linked list of integers
 *                       in ascending order using insertion sort algorithm.
 * @list: A pointer to the head of the doubly linked list
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *head, *curr, *next_node;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;

	head = *list;
	curr = head->next;

	while (curr != NULL)
	{
		next_node = curr->next;
		while (curr->prev != NULL && curr->n < curr->prev->n)
		{
			curr->prev->next = curr->next;
			if (curr->next != NULL)
				curr->next->prev = curr->prev;
			curr->next = curr->prev;
			curr->prev = curr->next->prev;
			curr->next->prev = curr;
			if (curr->prev != NULL)
				curr->prev->next = curr;
			else
				head = curr;
			print_list(*list); /* Print the list after each swap */
		}
		curr = next_node;
	}
	*list = head;
}

