#include "main.h"

/**
 * _strlen - calcule la longueur d une chaine de caracteres
 * @s: chaine de caracteres
 *
 * Return: longueur de la chaine
 */

int _strlen(char *s)
{
	int lenght = 0;

	while (*s != '\0')
	{
		lenght++;
		s++;
	}
	return (lenght);
}

/**
 * append_text_to_file - ajoute du texte a la fin d un fichier
 * @filename: nom du fichier
 * @text_content: chaîne de caract terminée par NULL à ajout fin du fichier
 *
 * Return: 1 en cas de succés, -1 en cas d echec
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int file_descriptor, write_status, length = 0;

	/*Vérifie si le nom du fichier est nul*/
	if (filename == NULL)
		return (-1);

	/*Ouvre le fichier en mode écriture uniquement, crée ou ajoute à la fin*/
	file_descriptor = open(filename, O_WRONLY | O_CREAT | O_APPEND);
	if (file_descriptor == -1)
		return (-1);

	/*Vérifie si le contenu du texte n'est pas nul*/
	if (text_content != NULL)
	{
		/*Obtient la longueur du texte*/
		length = _strlen(text_content);

		/*Écrit le contenu du texte à la fin du fichier*/
		write_status = write(file_descriptor, text_content, length);

		/*Vérifie si l'écriture a échoué*/
		if (write_status == -1)
		{
			close(file_descriptor);
			return (-1);
		}
	}

	/*Ferme le fichier*/
	close(file_descriptor);

	return (1);
}
