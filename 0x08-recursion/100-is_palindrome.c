#include "main.h"
#include <stdio.h>

/**
 * _strlen_recursion - returns the length of a string.
 * @s: string
 * Return: length of the string
 **/

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}

/**
 * palindrome - determinate if a string is palindrome
 * @s: string
 * @i: starting position of the string
 * @len: length of the string
 * Return: 1 if is palindrome and 0 if it's not
 **/

int palindrome(char *s, int i, int len)
{
	if (i == len)
	{
		return (1);
	}
	if (s[i] != s[len])
	{
		return (0);
	}
	if (i < len + 1)
	{
	return (palindrome(s, i + 1, len - 1));
	}
	return (1);
}

/**
 * is_palindrome - determinate if a string is palindrome
 * @s: string
 * Return: 1 if is palindrome and 0 if it's not
 **/

int is_palindrome(char *s)
{
	int len;

	len = _strlen_recursion(s) - 1;

	return (palindrome(s, 0, len));
}
