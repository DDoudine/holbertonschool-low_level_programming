#include <stdio.h>   /*standard input/output library*/
#include <stdlib.h>  /*standard library for strtol*/
#include "main.h"

/**
 * main - print the product of integer arguments or "error"
 * @argc: integer - Number of command-line arguments
 * @argv: pointer to an array of strings - command-line arguments
 *
 * Return: 0 (success)
 */

int main(int argc, char *argv[])
{
	char *pointer;  /*pointer for error checking with strtol*/
	int index;  /*loop variable*/
	int product = 1;  /*initialize product to 1*/

	if (argc > 2)
	{
		for (index = 1; index < argc; index++)
		/*multiply product by integer value of each argument*/
		product *= strtol(argv[index], &pointer, 10);

	printf("%d\n", product);  /*print the product*/
	}
	else
	printf("Error\n");  /*print an error message for insufficient arguments*/

	return (0);  /*indicate successful execution*/
}

