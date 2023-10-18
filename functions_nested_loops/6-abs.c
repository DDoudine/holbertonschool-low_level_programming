#include <stdio.h>
#include "main.h"

/**
 * la valeur absolue de –4 est 4, et celle de +4 est 4
 *
 * _abs - Entry
 * @n: number
 * 
 * Return: Number
 */
int _abs(int n)
{
	if (n >= 0)
		return (n);
	else
		return (-n);
}
