#include <stdio.h>   /*standard input/output library*/
#include <stdlib.h>  /*standard library for strtol*/
#include <string.h>  /*standard string library*/
#include <ctype.h>   /*standard library for character type-checking*/
#include "main.h"

/**
 * main - adds positive numbers from command-line arguments
 * @argc: integer - number of command-line arguments
 * @argv: pointer to an array of strings - command-line arguments
 *
 * Return: 0 (success) or 1 (error)
 */

int main(int argc, char *argv[])
{
	int index, sum = 0;  /*initialize loop variable and sum*/
	char *ptr;  /*pointer for character parsing*/

	index = 1;
	while (index < argc)
	{
		ptr = argv[index];
		while (*ptr != '\0')
	{
		if (!isdigit(*ptr))  /*check if each character is a digit*/
		{
			printf("Error\n");  /*rint an error message*/
			return (1);  /*indicate an error*/
		}
		ptr++;
	}
	sum += strtol(argv[index], NULL, 10);  /*add the valid integer to the sum*/
	index++;
	}

	printf("%d\n", sum);  /*print the sum of valid positive numbers*/
	return (0);  /*indicate success*/
}

