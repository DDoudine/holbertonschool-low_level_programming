#include <stdarg.h> /*pour les fonctions variadiques*/
#include <stdio.h>

/**
 * sum_them_all - calcule la somme des arguments
 * @n: nombre d arguments
 * Return: somme des arguments
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list args_list;

	unsigned int sum = 0;
	unsigned int index;

	/* verifie et initialise les arguments */
	if (n == 0)
		return (0);

	va_start(args_list, n);

	/* parcourt tous les paramètres */
	for (index = 0; index < n; index++)
		sum += va_arg(args_list, int);

	va_end(args_list);

	return (sum);
}
