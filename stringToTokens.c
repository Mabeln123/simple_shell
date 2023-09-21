#include "justicemabel.h"

/**
 * *nbr_spaces - Calculate the abundance of empty space in a string
 * @s: The string where spaces are lurking
 * Return: The number of space entities (an unsigned integer)
 */
unsigned int nbr_spaces(char *s)
{
    int i, space_count = 0;

    for (i = 0; s[i] != '\0'; i++)
    {
        if (s[i]  == ' ')
            space_count++;
    }

    return (space_count);
}

/**
 * stringToTokens - Transform a sentence into a swarm of words
 * @str: The sentence to unleash
 * Return: A formation of tokens ready for action (a char pointer array)
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
        fprintf(stderr, "sh: allocation error - out of tokens\n");
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
