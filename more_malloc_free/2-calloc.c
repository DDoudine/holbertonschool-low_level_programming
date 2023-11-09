#include "main.h"

/**
 * _calloc - allocate memory for an array
 * @nmemb:   number of elements in the array
 * @size:    size in bytes of the elements
 *
 * Return:   pointer to allocate memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int count;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmemb * size);

	if (ptr == NULL)
		return (NULL);

	for (count = 0; count < (nmemb * size); count++)
		ptr[count] = 0;

	return (ptr);
}

