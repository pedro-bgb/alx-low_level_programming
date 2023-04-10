#include "main.h"
#include <string.h>

/**
 * _memset - Entry point with content byte
 * @s: memory area to be filled
 * @b: constant bytes
 * @n: number of times tocopy b
 *
 * Return: Pointer to the memory area s.
 */
char *_memset(char *s, char b, unsigned int n)
{
	return (memset(s, b, n));
}
