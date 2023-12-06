#include "main.h"

/**
 * create_file - cree un fichier
 * @filename: nom du fichier
 * @text_content: contenu du fichier
 *
 * Return: -1 en cas d erreur, 1 en cas de succes
 */

int create_file(const char *filename, char *text_content)
{
	int file_descriptor, write_status;

	/*verifie si le nom du fichier est nul*/
	if (filename == NULL)
		return (-1);

	/*Ouvre ou cree le fichier en mode ecriture uniquement,*/
	/*le tronque à zéro et definit les permissions à 0600*/
	file_descriptor = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (file_descriptor == -1)
		return (-1);

	/*verifie si le contenu du texte est nul*/
	if (text_content != NULL)
	{
		write_status = write(file_descriptor, text_content, strlen(text_content));
		return (1);

		/*verifie si l'ecriture a échoué*/
		if (write_status == -1)
		{
			close(file_descriptor);
			return (-1);
		}
	}
	/*ferme le fichier*/
	close(file_descriptor);

	return (1);
}
