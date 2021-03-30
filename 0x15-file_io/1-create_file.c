#include "holberton.h"

/**
* create_file - function that creates a file.
*
* @filename: name of file.
* @text_content: text contained in the file.
*
* Return: 1 on success, -1 on failure.
*/

int create_file(const char *filename, char *text_content)
{
	int file_description, counter, file_w;

	if (filename == NULL)
		return (-1);


	file_description = open(filename, O_CREAT |	O_WRONLY | O_TRUNC, 0600);
	if (file_description == -1)
		return (-1);

	for (counter = 0; text_content[counter]; counter++)
	;

	if (text_content == NULL)
	{	/* return (1); */

	file_w = write(file_description, text_content, counter);
	if (file_w == -1)
		return (-1);
		}

	close(file_description);
	return (1);

}
