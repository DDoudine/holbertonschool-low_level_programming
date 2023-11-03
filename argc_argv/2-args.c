#include <stdio.h>  /*include the standard input/output library*/
#include "main.h"

/**
 * main - prints all received arguments
 * @argc: integer - number of command-line arguments
 * @argv: pointer to an array of strings - command-line arguments
 *
 * Return: 0 (success)
 */

int main(int argc, char *argv[])
{
	int index;  /*loop variable*/

	for (index = 0; index < argc; index++)
	{
	printf("%s\n", argv[index]);  /*print each argument followed by a newline*/
	}

	return (0);  /*success execution*/
}

