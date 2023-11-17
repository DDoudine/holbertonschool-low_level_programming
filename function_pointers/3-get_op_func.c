#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * get_op_func - selectionne la fonction correcte pour effectuer l operation
 * @s: operateur donnee (+, *, -, /, %)
 * Return: pointeur vers la fonction correspondante
*/

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		/*marqueur de fin du tableau*/
		{NULL, NULL}
	};

	int i = 0;

	/*parcourt le tableau d operations*/
	while (ops[i].op != NULL)
	{
		/*verifie si l operateur correspond a l'operation actuelle dans le tableau*/
		if (*s == *ops[i].op)
			/*retourne le pointeur vers la fonction correspondante*/
			return (ops[i].f);
		i++;
	}

	/*retourne NULL si aucune correspondance n est trouvee*/
	return (NULL);
}
