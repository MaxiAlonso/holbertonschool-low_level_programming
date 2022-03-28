#include "main.h"

/**
 * main - entry point
 * for function that copies the content of a file to another file.
 * @argc: number of arguments
 * @argv: arguments/
 * Return: 0
 **/

int main(int argc, char *argv[])
{
	int from = 0, to = 0, r = 0, w = 0, c = 0, len = 1024;
	char str[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	from = open(argv[1], O_RDONLY);
	r = read(from, str, len);
	if (argv[1] == NULL || from == -1 || r == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		close(from);
		exit(98);
	}
	to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC,
			S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
	w = write(to, str, r);
	if (argv[2] == NULL || to == -1 || w == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		close(from);
		close(to);
		exit(99);
	}
	c = close(from);
	if (c == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", from);
		exit(100);
	}
	c = close(to);
	if (c == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", from);
		exit(100);
	}
	return (0);
}
