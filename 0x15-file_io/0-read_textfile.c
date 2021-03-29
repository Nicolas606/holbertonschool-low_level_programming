#include "holberton.h"

/**
* read_textfile - function that appends text at the end of a file.
*
* @filename: name of file
* @letters: size of buffer
*
* Return: size of characters
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	int file_description;
	ssize_t size;

	if (filename == NULL)
		return(0);

	file_description = open(filename, O_RDWR);

	if (file_description == -1)
		return(0);

	buffer = malloc(sizeof(char) * letters);

	if(buffer == NULL)
		return(0);
	
	size = read(file_description, buffer, letters);
	size = write(1, buffer, size);

	close(file_description);
	free(buffer);

	return (size);

}
