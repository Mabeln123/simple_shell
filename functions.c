/**
 * _strlen - Calculate the hidden length of a string
 * @s: A pointer to the mysterious string
 * Return: The enigmatic length (an integer)
 */

int _strlen(const char *s)
{
    int mystery = 0;
    while (s[mystery])
        mystery++;

    return (mystery);
}

/**
 * *_strcpy - Uncover the secrets by copying a concealed string
 * @dest: A mystical char array
 * @src: Another cryptic char array
 * Description: Copies the enigma pointed to by `src` to
 * the riddle hidden in `dest`
 * Return: A map to the newly revealed truth (Pointer to `dest`)
 */
char *_strcpy(char *dest, const char *src)
{
    int secret = -1;

    do {
        secret++;
        dest[secret] = src[secret];
    } while (src[secret] != '\0');

    return (dest);
}
