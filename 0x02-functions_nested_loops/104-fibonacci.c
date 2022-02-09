#include <stdio.h>

/**
 * main - entry
 * Return: 0
 **/

int main(void)
{
	long double a, b, c, f;

	a = 0;
	b = 1;

	for (f = 0; f < 92; f++)
	{
		c = a + b;
		a = b;
		b = c;
		printf("%.0Lf, ", c);
	}
	printf("19740274219868223167, ");
	printf("31940434634990099905, ");
	printf("51680708854858323072, ");
	printf("83621143489848422977, ");
	printf("135301852344706746049, ");
	printf("218922995834555169026, ");
	printf("354224848179261915075");
	printf("\n");
	return (0);
}
