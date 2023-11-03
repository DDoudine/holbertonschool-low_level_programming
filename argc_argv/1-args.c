#include <stdio.h>  /*include the standard input/output library*/
#include "main.h"

/**
 * main - Entry point that counts and prints the number of arguments.
 * @argc: Integer - Number of command-line arguments.
 * @argv: Pointer to an array of strings - Command-line arguments.
 *
 * Return: 0 (success)
 */

int main(int argc, char *argv[])
{
	int index;  /*loop variable*/

	for (index = 0; index < argc; index++)
	{
		argv++;  /*move to the next argument*/
	}

	printf("%d\n", argc - 1);  /*print the argument count, without program name)*/
	return (0);  /*indicate success*/
}

