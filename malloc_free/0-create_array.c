#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creates a character array of a specified size
 * @size: size of the array
 * @c: character(s) to put in the array
 * Return: pointer to the array or NULL on failure
 */

char *create_array(unsigned int size, char c)
{
	char *array_ptr;  /*pointer to the array*/
	unsigned int index;  /*loop counter*/

	if (size == 0)
		return (NULL);  /*return NULL if size is 0*/

	array_ptr = malloc((sizeof(char)) * (size));

	if (array_ptr == NULL)
		free(array_ptr); /*libére la mémoire*/
		return (NULL);  /*return NULL on allocation failure*/

	for (index = 0; index < size; index++)  /*fill the array with character 'c'*/
		array_ptr[index] = c;

	return (array_ptr);  /*return the pointer to the created and filled array*/
}

