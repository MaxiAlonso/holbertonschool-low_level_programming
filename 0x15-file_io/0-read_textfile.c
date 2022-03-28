#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: file to open and read
 * @letters:number of letters it should read and print
 * Return: the actual number of letters it could read and print
 * or 0 if he file can not be opened or read, file name is NULL or write fails
 **/

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd = 0, r= 0, w = 0;
	char *str;

	if (filename == NULL)
	{
		return (0);
	}

	fd = open(filename, O_RDONLY);

	if (fd == -1)
	{
		return (0);
	}

	str = malloc((sizeof(char) * letters));

	if (str == NULL)
	{
		return (0);
	}

	r = read(fd, str, letters);
	if (r == -1)
	{
		free(str);
		return (0);
	}

	w = write(STDOUT_FILENO, str, r);
	free(str);
	close(fd);

	if (w != r)
	{
		return (0);
	}

	return (w);
}
