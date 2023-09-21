#include <unistd.h>

/**
 * customWrite - Writes a character to the standard output (stdout)
 * @character: The character to be printed
 *
 * Description: This function writes the specified character 'character'
 * to the standard output (stdout).
 *
 * Return: Returns 1 on success. On error, returns -1 and sets errno accordingly.
 */
int _putchar(char character)
{
    return (write(1, &character, 1));
}
