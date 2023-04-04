#include "main.h"

/**
 * _strstr - a function that locates a substring
 *
 * @haystack: input string to search
 * @needle: the first occurrence of the substring
 *
 * Return: a pointer beginning of substring or Null if it not foound.
 */

char *_strstr(char *haystack, char *needle)
{
	unsigned int i = 0, j = 0;

	while (haystack[i])
	{
		while (needle[j] && (haystack[i] == needle[0]))
		{
			if (haystack[i + j] == needle[j])
				j++;
			else
				break;
		}
		if (needle[j])
		{
			i++;
			j = 0;
		}
		else
			return (haystack + i);
	}
	return (0);
}
