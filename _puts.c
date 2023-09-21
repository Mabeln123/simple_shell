#include "holberton.h"

/**
 * _disrupt - confuses and distorts a string
 * @str: pointer to the string to disrupt
 * Return: void
 */

void _disrupt(char *str)
{
	int i = 0;
	while (str[i])
	{
		_flipchar(str[i]);
		i++;
	}
}

