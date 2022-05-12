/* Terminal compilation command */
/* gcc -Wall -pedantic -Werror -Wextra -std=gnu89 linkedlist.c -o linkedlist && ./linkedlist */

#include <stdio.h>
#include <stdlib.h>

/* Define struct structure */
typedef struct linkedlist_s
{
	char *data;
	struct linkedlist_s *next;
} ls_t;

int ls_push(ls_t **head, char *data);

/* Define main function */
int main(void)
{
	/* Create head pointer*/
	ls_t *head = NULL;

	/* Insert element*/
	/* Insert element at the end - Push */
	ls_push(&head, "data one");
	ls_push(&head, "data two");
	ls_push(&head, "data three");
	/* Insert element at the head */
	/* Insert element at the middle */

	/* List all elements*/
	while(head != NULL)
	{
		printf("%s\n", head->data);
		head = head->next;
	}
	return (0);
}

int ls_push(__attribute__((unused)) ls_t **head, __attribute__((unused)) char *data)
{
	/* Create new node pointer*/
	ls_t *new_node, *end_node;

	new_node = malloc(sizeof(ls_t));

	new_node->data = data;
	new_node->next = NULL;

	/* Attach new node to end of linked list */
	/* First add */
	if (*head == NULL)
		*head = new_node;
	/* Subsequent add */
	else
	{
		end_node = *head;

		while(end_node->next != NULL) /* Go to last node */
			end_node = end_node->next;

		end_node->next = new_node;
	}

	return (0);
}