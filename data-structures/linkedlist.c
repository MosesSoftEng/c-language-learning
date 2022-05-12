/* Terminal compilation command */
/* gcc -Wall -pedantic -Werror -Wextra -std=gnu89 linkedlist.c -o linkedlist && ./linkedlist */

/* Define struct structure */
typedef struct linkedlist_s
{
	char *data;
	struct ls_t *next;
} ls_t;

void ls_add(ls_t *head, char *data);

/* Define main function */
int main(void)
{
	/* Create head */
	ls_t *head;

	/* Insert element*/
	/* Insert element at the end - Push */
	ls_add(head, "data one");

	/* Insert element at the head */
	/* Insert element at the middle */

	/* List all elements*/
	return (0);
}

void ls_add(ls_t *head, char *data)
{

}