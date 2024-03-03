#include "sort.h"



void insertion_sort_list(listint_t **list){
    listint_t *new, *temp1, *temp2, *x, *head = *list;

    if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;
    while (head){
        new = head->next;
        temp1 = head;
        while(temp1){
            temp2 = temp1;
            if (temp2->n > new->n){
                x = temp2;
                temp2->next = new-> next;
                new->next->prev = x;
                new->next = temp2;
                new->prev = x->prev;
                temp2->prev = new;
                if (temp2->prev)
                    temp2->prev->next = new;
		print_list(*list);
            }
		if (temp1->prev->prev)	
            		temp1 = temp1->prev->prev;
        }
        head = head->next;
    }
}
