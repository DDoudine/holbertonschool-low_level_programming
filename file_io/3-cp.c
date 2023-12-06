#include "main.h"

/**
 * main - Point d'entrée du programme
 * @argc: Nombre d'arguments
 * @argv: Tableau d'arguments
 *
 * Return: 0.
 */
int main(int argc, char *argv[])
{
	int source_file, destination_file, bytes_read;
	char buffer[1024];
	/*Vérifie s'il y a exactement 3 arguments (nom du programme inclus)*/
	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: cp source_file destination_file\n"), exit(97);
	/*Ouvre le fichier source en mode lecture seulement*/
	source_file = open(argv[1], O_RDONLY);
	if (source_file == -1)
	{
		/*Gère l'erreur si la lecture du fichier source échoue*/
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	/*Ouvre ou crée le fichier destination en mode écriture seulement,*/
	/*avec permissions 0664*/
	destination_file = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (destination_file == -1)
	{
		/*Gère l'erreur si l'ouverture ou la création*/
		/*du fichier destination échoue*/
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	/*Lit le contenu du fichier source par blocs de 1024 octets*/
	/*et écrit dans le fichier destination*/
	while ((bytes_read = read(source_file, buffer, 1024)) > 0)
	{
		if (write(destination_file, buffer, bytes_read) != bytes_read || destination_file == -1)
		{
			/*Gère l'erreur si l'écriture dans le fichier destination échoue*/
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}
	/*Gère l'erreur si la lecture du fichier source échoue*/
	if (bytes_read == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	/*Ferme les descripteurs de fichiers*/
	if (close(source_file) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", source_file), exit(100);

	if (close(destination_file) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", destination_file), exit(100);

	return (0);
}
