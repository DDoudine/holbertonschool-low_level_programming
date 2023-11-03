#include <stdio.h>  /*inclure la bibliotheque standard pour l entree/sortie*/

/**
 * main - prints the program name and command-line arguments
 * @argc: integer - Number of command-line arguments
 * @argv: pointer to an array of strings - array of command-line arguments
 *
 * return: 0 (success)
 */


/* declaration de la fonction principale */
int main(int argc, char *argv[])
{
	int index;  /* declaration d une variable pour la boucle */

	/* boucle pour parcourir les arguments de la ligne de commande */
	for (index = 0; index < argc; index++)
{
		printf("%s", argv[index]);  /*afficher chaque argument*/
	}

	printf("\n");  /*saut de ligne*/
	return (0);  /*indiquer une execution reussie*/
}

