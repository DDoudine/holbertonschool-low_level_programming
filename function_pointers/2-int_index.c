#include "function_pointers.h"
#include <stdio.h>

/**
 * int_index - recherche un entier dans un tableau
 * @array: tableau d entiers
 * @size: taille du tableau
 * @cmp: pointeur vers une fonction de comparaison
 * Return: -1 si l entier n est pas trouve ou si le tableau est absent
 * */

int int_index(int *array, int size, int (*cmp)(int))
{
	int index;

	/*verifie si les parametres sont valides - || ==> ou*/
	if (array == NULL || cmp == NULL || size <= 0)
		return (-1);

	/*parcourt le tableau, retourne l indice si l entier est trouve*/
	for (index = 0; index < size; index++)
		if (cmp(array[index]))
			return (index);

	/*retourne -1 si l entier n est pas trouvé*/
	return (-1);
}
