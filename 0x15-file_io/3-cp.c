#include "holberton.h"

/**
* append_text_to_file- function that appends text at the end of a file.
*
* @filename: name of file.
* @text_content: text contained in the file.
*
* Return: 1 on success, -1 on failure.
*/

int main(int argc, char **argv)
{
	int file_descriptor1, file_descriptor2, byte_rd, byte_wr;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDOUT_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	file_descriptor1 = open(argv[1], O_RDONLY);
	file_descriptor2 = open(argv[2], O_CREAT | O_TRUNC | O_WRONLY, 0664 );

	while ((byte_rd= read(file_descriptor1, buffer, 1024)) > 0)
		byte_wr = write(file_descriptor2, buffer, byte_rd);

	if (file_descriptor1 == -1 || byte_rd == -1)
	{
		dprintf(STDOUT_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	if (file_descriptor2 == -1 || byte_wr == -1)
	{
		dprintf(STDOUT_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}

	if (close(file_descriptor1) == -1)
	{
		dprintf(STDOUT_FILENO, "Error: Can't close fd %s\n", argv[1]);
		exit(100);
	}

	if (close(file_descriptor2) == -1)
	{
		dprintf(STDOUT_FILENO, "Error: Can't close fd %s\n", argv[2]);
		exit(100);
	}

	return (0);
}
