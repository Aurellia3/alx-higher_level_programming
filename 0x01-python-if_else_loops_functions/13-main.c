#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "lists.h"

/*
 * main - check the code for
 *
 * Return: Always 0.
 */
int main(void)
{
	listint_t *head;

	head = NULL;
	add_nodeint_end(&head, 0);
	add_nodeint_end(&head, 1);
	add_nodeint_end(&head, 2);
	add_nodeint_end(&head, 3);
	add_nodeint_end(&head, 4);
	add_nodeint_end(&head, 98);
	add_nodeint_end(&head, 402);
	add_nodeint_end(&head, 1024);
	print_listint(head);

	printf("-----------------\n");

	insert_node(&head, 27);

	print_listint(head);

	free_listint(head);

	return (0);
}
