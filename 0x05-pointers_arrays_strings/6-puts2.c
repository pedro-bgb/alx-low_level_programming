#include "main.h"
#include <string.h>

/**
 *  * puts2 - Entry point
 *   * @str: string to be printed
 *    *
 *     * Desciption: Prints some part of a string.
 *      *
 *       * Return: Always 0 (success)
 */
void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; ++i)
	{
	if (i % 2 == 0)
	_putchar(str[i]);
	}
			_putchar('\n');
}
