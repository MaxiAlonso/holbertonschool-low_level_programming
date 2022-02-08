#include <stdio.h>

/**
 * main - entry
 * Return: 0
 **/

int main(void)
{
	int m, sum;

	for (m = 1; m < 1024 ; m++)
	{
		if (m % 3 == 0 || m % 5 == 0)
		{
			sum = sum + m;
		}
	}
	printf("%d\n", sum);
	return (0);
}
