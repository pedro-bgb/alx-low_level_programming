#include "main.h"
#include <stdio.h>

/**
 * *_strpbrk - entry point
 * @s: string to be checked
 * @accept: string to be searched for
 *
 * Return:a pointer to the byte in s that matches one of the bytes in accept
 * or NULL if no such byte is found
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j;
	char *p;

	for (i = 0; *s != '\0'; i++)
	{
		p = accept;

		for (j = 0; *p != '\0'; j++)
		{
			if (*s == *p)
			{
				return (s);
			}
			p++;
		}
		s++;
	}

	return (NULL);
}
