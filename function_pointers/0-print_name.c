#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_name - fonction qui imprime le nom
 * @name: pointeur vers le nom à imprimer
 * @f: pointeur vers une focntion prenant un pointeur de caractere 
 * en tant que parametre
 * Description:
 * cette fonction prend un pointeur vers une chaine de caracteres (`name`)
 * et un pointeur vers une fonction (`f`) en tant que parametres
 * Si le pointeur de fonction n est pas NULL,
 * la fonction pointee par le pointeur de fonction est appelee
 * avec le nom comme argument
 */

void print_name(char *name, void (*f)(char *))
{
    /*verifie si le pointeur de fonction n est pas NULL*/
        if (f != NULL)
        f(name);
}
