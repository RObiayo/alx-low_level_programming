#include <stddef.h>
#include "lists.h"

/**
 * get_dnodeint_at_index - Returns the nth node the list
 * @head: Header pointer
 * @index: Node index, starting from 0.
 *
 * Return: Address of the nth node, or NULL if the node is absent
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0;

	while (head != NULL)
	{
		if (count == index)
			return head;

		head = head->next;
		count++;
	}

	return NULL;
}
