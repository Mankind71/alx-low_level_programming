#include <stdlib.h>

/**
 * _realloc - reallocates a mem block
 *
 * @ptr: mem address to reallocate
 * @old_size: size of allocated space for ptr
 * @new_size: new size
 *
 * Return: void
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *new_ptr;
	char *old_ptr;
	unsigned int i;

	if (new_size == old_size)
	{
		return (ptr);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	new_ptr = malloc(new_size);
	if (ptr == NULL)
	{
		return (new_ptr);
	}
	old_ptr = ptr;
	if (new_size > old_size)
	{
		for (i = 0; i < old_size; i++)
			new_ptr[i] = old_ptr[i];
	}
	if (new_size < old_size)
	{
		for (i = 0; i < new_size; i++)
			new_ptr[i] = old_ptr[i];
	}
	free(ptr);
	return (new_ptr);
}
