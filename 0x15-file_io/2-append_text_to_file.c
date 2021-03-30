#include "holberton.h"

/**
* create_file - function that appends text at the end of a file.
*
* @filename: name of file.
* @text_content: text contained in the file.
*
* Return: 1 on success, -1 on failure.
*/

int append_text_to_file(const char *filename, char *text_content)
{
	int file_description, counter, file_w;

	if (filename == NULL || text_content == NULL)
		return (-1);

	file_description = open(filename, O_WRONLY | O_APPEND);
	if (file_description == -1)
		return (-1);

	for (counter = 0; text_content[counter]; counter++)
		;

	file_w = write(file_description, text_content, counter);
	if (file_w == -1)
		return (-1);

	close(file_description);
	return (1);
}
