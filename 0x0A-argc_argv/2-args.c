#include <stdlib.h>
#include <stdio.h>

/**
 * main - main that prints all arguments it receives
 * @argc: arguments
 * @argv: arguments
 *
 * return: Always 0
 */

int main(int argc, char *argv[])
{
	int i;
	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
