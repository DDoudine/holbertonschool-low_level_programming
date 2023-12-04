#include "main.h"

/**
 * read_textfile - lit un fichier texte et l'affiche sur la sortie
 * standard POSIX
 * @filename: nom du fichier
 * @letters: nombre de caractères à lire
 *
 * Return: nombre de caractères lus ou 0 en cas d'erreur
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
    /*Ouvre le fichier en mode lecture seule*/
	ssize_t file_descriptor = open(filename, O_RDONLY);

    /*Variables pour stocker les caractères lus et écrits*/
	ssize_t bytes_read, bytes_written;

    /*Tampon pour stocker le contenu du fichier*/
	char *ptr = malloc(sizeof(char) * letters);

    /*Vérifie si l'alloc de mémoire et le nom de fichier ne sont pas NULL*/
	if (ptr == NULL || filename == NULL)
		return (0);

    /*Utilise read pour lire jusqu'à 'letters' caractères dans le fichier*/
	bytes_read = read(file_descriptor, ptr, letters);

    /*Utilise write pour écrire le contenu sur la sortie standard*/
	bytes_written = write(STDOUT_FILENO, ptr, bytes_read);

    /*Vérifie les erreurs lors de l'écriture sur la sortie standard*/
	if (bytes_written == -1)
		return (0);

    /*Libère la mémoire allouée et ferme le descripteur de fichier*/
	free(ptr);
	close(file_descriptor);

    /*Renvoie le nombre d'octets écrits sur la sortie standard*/
	return (bytes_written);
}
