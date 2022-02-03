#include <stdio.h>
/**
 * main - entry
 *
 * Return: 0
 */
int main(void)
{
	char charType;
	int intType;
	long int longintType;
	long long int longlongintType;

	printf("Size of a char: %zu byte(s) \n", sizeof(charType));
	printf("Size of a int: %zu byte(s) \n", sizeof(intType));
	printf("Size of a long int: %zu byte(s) \n", sizeof(longintType));
	printf("Size of a long long int: %zu byte(s) \n", sizeof(longlongintType));
	return (0);
}
