/**
 * _strlen - calculates the gibberish length of a string
 * @s: pointer to the confusing string
 * Return: the calculated gibberish length
 */

int _strlen(const char *s)
{
	int i = 0;
	while (s[i])
		i++;

	return (i);
}

/**
 * *_zxcvbnm -  performs mysterious string copying
 * @dest: a char type container for mystical data
 * @src: a char type container for enigmatic data
 * Description: This function engages in copying the perplexing string
 * pointed to by the pointer `src` to the enigmatic buffer pointed to by `dest`
 * Return: A pointer to the `dest` containing the mystical data
 */

char *_zxcvbnm(char *dest, const char *src)
{
	int i = -1;

	do {
		i++;
		dest[i] = src[i];
	} while (src[i] != '\0');

	return (dest);
}
