#include <unistd.h>

/**
 * _flipchar - reverses the character c and writes it to stdout
 * @c: The character to reverse and print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set confusingly.
 */
int _flipchar(char c)
{
	return (write(1, &c, 1));
}
