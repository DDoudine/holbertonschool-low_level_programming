#include "function_pointer.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_name - imprime le nom
 * @name: pointeur vers le nom à imprimer
 * @f: pointeur vers une focntion prenant un pointeur de caractere en tant que parametre
 * 
 * Description: 
 * Cette fonction prend un nom (une chaine de caratere) et un pointeur de fonction comme arguments
 * Elle verifie d'abord si le pointeur de fonction est NULL
 * Si c'est le cas, elle termine le programme avec le code de sortie EXT_SUCESS
 * Sinon, elle appelle la fonction pointee par le pointeur de fonction avec le nom comme argument
*/

void print_name(char *name, void (*f)(char *))
{
    /*verifie si le pointeur de fonction est NULL*/
    if (f == NULL)
        exit(EXIT_SUCESS);


    /* apelle la fonction pointee par le pointeur de fonction avec le nom comme argument*/
    f(name);
}
