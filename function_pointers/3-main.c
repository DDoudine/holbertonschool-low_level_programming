#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - calculatrice d'opérations simples
 * @argc: nombre d arguments de la ligne de commande
 * @argv: tableau d arguments de la ligne de commande
 * Return: 0
*/

int main(int argc, char *argv[])
{
	int num1, num2;
	/*declaration d un pointeur de fonction*/
	int (*f)(int, int);

	/*vérification du nombre correct d arguments*/
	if (argc != 4)
	{
		puts("Error");
		exit(98);
	}

	/*conversion des arguments en entiers*/
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	/*recuperation du pointeur de fonction correspond a l operateur*/
	f = (get_op_func(argv[2]));

	/*verification de la valide de l operateur*/
	if (f == NULL || argv[2][1] != '\0')
	{
		puts("Error");
		exit(99);
	}

	/*verification de la divison par zero*/
	if ((argv[2][0] == '/' || argv[2][0] == '%') && argv[3][0] == '0')
	{
		puts("Error");
		exit(100);
	}

	/*affichage du resultat de l operation*/
	printf("%d\n", f(num1, num2));

	return (0);

}
