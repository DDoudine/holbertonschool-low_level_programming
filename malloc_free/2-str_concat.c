#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * _strlen - calculate the length of a string
 * @s: string
 * len: length
 * Return: 0
 */
int _strlen(char *s)
{
	int len = 0;

	/*iterate through the string until the null character is reached*/
	for (; *s != '\0'; s++)
	{
		/*increment the length counter*/
		len++;
	}

	return (len);
}

/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: pointer to the concatenated string or NULL in case of failure
 */
char *str_concat(char *s1, char *s2)
{
	int src_index, dest_index, len_s1, len_s2;
	char *result;

	/*handle cases where s1 or s2 is NULL by treating them as empty strings*/
	if (s1 == NULL && s2 == NULL)
	{
		s1 = "";
		s2 = "";
	}
	if (s1 == NULL)
		s1 = "";
	else if (s2 == NULL)
		s2 = "";

	len_s1 = _strlen(s1);
	len_s2 = _strlen(s2) + len_s1;
	/*dynamically allocate memory for the new string (+1 for the null)*/
	result = malloc(len_s2 + 1);
	if (result == NULL)
		return (NULL);  /*return NULL in case of memory allocation failure*/
	src_index = 0;
	while (src_index < len_s1)
	{
		result[src_index] = s1[src_index];  /*copy charac' from s1 to new string*/
		src_index++;
	}
	dest_index = src_index;
	src_index = 0;
	while (dest_index < len_s2)
	{
		result[dest_index] = s2[src_index];  /*copy charact' from s2 to new string*/
		dest_index++;
		src_index++;
	}
	result[dest_index] = '\0';  /*null-terminate the concatenated string*/
	return (result);  /*return a pointer to the concatenated string*/
}

