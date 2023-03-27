#include "main.h"
#include <string.h>

/**
 * puts_half - Entry point
 * @str: variable to be checked
 *
 * Description: prints half of a string
 *
 * Return: Always 0
 */
void puts_half(char *str)
{
	int len, i;

	len = strlen(str);
	i = len / 2;

	while (i <= len - 1)
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
