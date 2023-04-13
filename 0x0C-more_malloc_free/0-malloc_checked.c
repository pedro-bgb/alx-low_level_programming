#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - allocated memory
 * @b: number of bytes allocated
 *
 * Return: pointer to new allocated memory
 *         exit with 98 if malloc fails
*/

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	
	if (ptr == NULL)
		exit(98);

	return (ptr);
}
