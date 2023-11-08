#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strlen - Entry
 * @s: pointer to a string
 *
 * Returns: the length of the string as an integer
 */

int _strlen(char *s)
{
	int len = 0;  /*initialize a counter to zero*/

	/*iterate through the string until the end ('\0' character)*/
	for (; *s != '\0'; s++)
	{
		len++;  /*increment the counter*/
	}
	return (len);  /*return the length of the string*/
}

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: pointer to a string
 *
 * Returns: a pointer to a new string or NULL in case of failure
 */

char *_strdup(char *str)
{
	int index = 0, len;
	char *ptr;

	if (str == NULL)  /*check if the input pointer is NULL (empty string)*/
	{
		return (NULL);
	}
	/*use the _strlen function to get the length of the string*/
	len = _strlen(str);
	/*dynamically allocate memory for the new string (+1 for the null character)*/
	ptr = malloc(len + 1);

	if (ptr == NULL)  /*check if memory allocation failed*/
	{
		return (NULL);
	}
	/*copy characters from the original string to the new string*/
	while (index < len)
	{
		ptr[index] = str[index];  /*copy one character at a time*/
		index++;  /* move to the next character*/
	}
	ptr[index] = '\0';  /*add the null character at the end of the new string*/
	return (ptr);  /*return a pointer to the new string*/
}

