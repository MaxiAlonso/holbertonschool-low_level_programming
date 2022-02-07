#include "main.h"

/**
 * main - entry point
 * Return: 0
 **/
int main(void)
{
	int a;
	char string[] = "_putchar";

	for (a = 0 ; a < 8 ; a++)
	{
		_putchar(string[a]);
	}
	_putchar('\n');
	return (0);
}
