/* Terminal compilation command */
/* gcc -Wall -pedantic -Werror -Wextra -std=gnu89 linkedlist.c -o linkedlist && ./linkedlist */

/* Define struct structure */
typedef struct linkedlist_s
{
	char *data;
	struct ls_t *next;
} ls_t;

/* Define main function */