#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file.
 * @filename: file of the name wich the text is going to be appended
 * @text_content: text to be appended.
 * Return: 1 on success and -1 on failure
 **/ 

int append_text_to_file(const char *filename, char *text_content)
{
	int len = 0, fd = 0, w = 0;

	if (filename == NULL)
	{
		return (-1);
	}
	if (text_content == NULL)
	{
		return (1);
	}
	while (text_content[len] != '\0')
	{
		len++;
	}

	fd = open(filename, O_WRONLY | O_APPEND);

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
