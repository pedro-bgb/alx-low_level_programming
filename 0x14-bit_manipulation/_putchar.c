#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: if works 1.
 * if error, -1 is returned
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
