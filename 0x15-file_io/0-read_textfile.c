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
	int fd = 0, sdo = 0, wr = 0;
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

	str = malloc((sizeof(char) * letters) + 1);

	if (str == NULL)
	{
		return (0);
	}

	str[letters] = '\0';
	sdo = read(fd, str, letters);

	if (sdo == -1)
	{
		return (0);
	}

	wr = write(STDOUT_FILENO, str, letters);
	free(str);
	close(fd);

	if (wr == -1)
	{
		return (0);
	}

	return (letters);
}
