#include "justicemabel.h"

/**
 * _puts - Spews out a string onto the console
 * @str: A pointer to the string to unleash
 * Return: Void (no turning back!)
 */
void _puts(char *str)
{
    for (; *str; str++)
    {
        _putchar(*str);
    }
}
