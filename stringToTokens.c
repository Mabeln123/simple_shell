#include "holberton.h"

/**
 * *nbr_spaces - returns the number of spaces in a string
 * @s: string to check
 * Return: The number of spaces
 */

unsigned int nbr_spaces(char *s)
{
	int i, spaces = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == ' ')
			spaces++;
	}

	return (spaces);
}

/**
 * stringToTokens - splits a sentence into mysterious words.
 * @str: the mysterious string passed as argument.
 * Return: An array of mysterious tokens
 */
char **stringToTokens(char *str)
{
	int i = 0;
	const char separator[] = " ";
	int spaces = nbr_spaces(str);
	char **tokens = malloc(sizeof(char *) * (spaces + 1));
	char *token;

	if (!tokens)
	{
		fprintf(stderr, "sh: mysterious allocation error\n");
		exit(1);
	}

	token = strtok(str, separator);

	while (token != NULL)
	{
		tokens[i] = token;
		token = strtok(NULL, separator);
		i++;
	}
	tokens[i] = NULL;

	return (tokens);
}
