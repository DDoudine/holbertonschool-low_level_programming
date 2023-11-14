#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_iterator - execute une fonction sur chaque element d un tableau
 * @array : pointeur vers le tableau
 * @size: taille du tableau
 * @action: pointeur vers la fonction a executer
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
    size_t index;

    /*verifie si le tableau et le pointeur de fonction sont valides*/
    if (array != NULL && action != NULL)
    {
        /*itere sur chaque element du tableau et execute la fonction sur cet element*/
        for (index = 0; index < size; index++)
            action(array[index]);
    }
}
