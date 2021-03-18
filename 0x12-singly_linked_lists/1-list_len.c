#include "lists.h"

size_t list_len(const list_t *h)
{
	const list_t *cursor = h;
	size_t count = 0;

	while (cursor != NULL)
	{
		count += 1;
		cursor = cursor->next;
	}
	return (count);
}
