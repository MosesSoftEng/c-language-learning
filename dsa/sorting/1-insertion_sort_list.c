#include "sort.h"

/**
 * insertion_sort_list - function that sorts a double-linked list of integers
 *	in ascending order using the  Insertion sort algorithm
 *
 * @list: Pointer to the head of a doubly-linked list of integers
 */

/*
 * Pseudocode
 * 1. Loop each element in double-linked list
 * 2.   Loop backwards, from previous element from current
 * 3.       if previous element > current element
 * 4.			stitch up current element location
 * 5.			insert current before previous if previous is head make current
 * 					head
 */

void insertion_sort_list(
	__attribute__ ((unused)) listint_t **list
) {
	/* Reference head to avoid changing list head*/
	/* Double pointer to single pointer */
	listint_t *c = *list;

	while (c)
	{
		listint_t *p =  c->prev;

		printf("\nc: %d\n", c->n);

		/* Loop backwards */
		while (p)
		{
			printf("p: %d, ", p->n);

			if (p->n > c->n)
			{
				listint_t *c_next = c->next;
				listint_t *c_prev = c->prev;
				listint_t *p_prev = p->prev;

				/* stich up */
				if (c_next)
					c_next->prev = c_prev;

				if (c_prev)
					c_prev->next = c_next;

				/* insert */
				c->next = p;
				c->prev = p->prev;

				/* Set ne head */
				if (c->prev == NULL)
					*list = c;

				if (p_prev)
					p_prev->next = c;

				p->prev = c;

				puts("");
				print_list(*list);

				p = c->prev;
			}
			else
				p = p->prev;
		}
		puts("");

		/* Go to next node */
		c = c->next;
	}
}
