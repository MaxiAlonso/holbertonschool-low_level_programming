#include "main.h"

/**
 * create_file - creates a file.
 * @filename: name of nthe file to be created.
 * @text_content: NULL terminated string to write to the file
 * Return: 1 on success, -1 on failure (file can not be created,
 * file can not be written, write “fails”, etc…)
 **/

int create_file(const char *filename, char *text_content)
{
	int len = 0, fd = 0, w = 0;

	if (filename == NULL)
	{
		return (-1);
	}
	if (text_content == NULL)
	{
		text_content = "";
	}
	while (text_content[len] != '\0')
	{
		len++;
	}

	fd = open(filename, O_RDWR | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);

	if (fd == -1)
	{
		return (-1);
	}
	w = write(fd, text_content, len);
	close(fd);
	if (w != len)
	{
		return (-1);
	}
	return (1);
}
