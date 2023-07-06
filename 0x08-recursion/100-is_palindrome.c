#include "main.h"

/**
 * palindrome_checker - recursive palindrome check
 *
 * @i: param
 * @half: half the length
 * @length: param
 * @s: string to check
 *
 * Return: 1 if true. 0, otherwise
 */

int palindrome_checker(int i, int half, int length, char *s)
{
	if (i > half)
		return (1);
	if (s[i] == s[length])
		return (palindrome_checker(i + 1, half, length - 1, s));
	return (0);
}

/**
 * _strlen_recursion - gets length of string
 *
 * @s: string to check
 * Return: 1 if true. 0, otherwise
 */

int _strlen_recursion(char *s)
{
	if (*s)
	{
		return (1 + _strlen_recursion(s + 1));
	}
	else
		return (0);
}

/**
 * is_palindrome - check if palindrome
 * @s: string to check
 * Return: 1 if true. 0, otherwise
 */

int is_palindrome(char *s)
{
	int i = 0, length = _strlen_recursion(s);

	return (palindrome_checker(i, length / 2, length - 1, s));
}
