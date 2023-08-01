#include "lists.h"

/**
 * free_listint_safe - frees the linked list
 * @fn: pointer to the first node in the linked list
 *
 * Return: The number of elements in the list
 */
size_t free_listint_safe(listint_t **fn)
{
	size_t len = 0;
	int diff;
	listint_t *temp;

	if (!fn || !*fn)
		return (0);

	while (*fn)
	{
		diff = *fn - (*fn)->next;
		if (diff > 0)
		{
			temp = (*fn)->next;
			free(*fn);
			*fn = temp;
			len++;
		}
		else
		{
			free(*fn);
			*fn = NULL;
			len++;
			break;
		}
	}

	*fn = NULL;

	return (len);
}
