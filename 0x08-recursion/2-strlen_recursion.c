#include "main.h"

/**
 * _strlen_recursion - return the lenghth of a string
 * @s: character of the string
 * Return: Always 0 (Success)
 */
int _strlen_recursion(char *s)
{

	/*Base condition*/
	if (*s == '\0')
	return (0);

	else
	return (1 + _strlen_recursion(s + 1)); /*Sum 1*/
}
