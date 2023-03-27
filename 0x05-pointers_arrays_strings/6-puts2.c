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
	int i = 0;

	while (str[i] != '\0')
	{
	if (str[i] == '\0')
	{
		break;
													}
	else
													{
													_putchar(str[i]);
													i = i + 2;
													}
	}
	_putchar('\n');
}
