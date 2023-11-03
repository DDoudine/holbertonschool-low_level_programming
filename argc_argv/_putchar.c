#include <unistd.h>

/**
 * _putchar - Writes a single character to standard output.
 * @c: character to be written.
 *
 * Return: On success, 1 is returned.
 * On error, -1 is returned, and the errno variable is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}                                  
