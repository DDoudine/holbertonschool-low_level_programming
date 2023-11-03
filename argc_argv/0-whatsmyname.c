#include <stdio.h>  // inclure la bibliotheque standard pour l entree/sortie

// declaration de la fonction principale
int main(int argc, char *argv[]) {
	int index;  // declaration d une variable pour la boucle

	// boucle pour parcourir les arguments de la ligne de commande
	for (index = 0; index < argc; index++) {
		printf("%s", argv[index]);  // afficher chaque argument
	}

	printf("\n");  // saut de ligne
	return 0;  // indiquer une execution reussie
}

