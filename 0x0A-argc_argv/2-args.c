#include <stdio.h>
#include "main.h"

/**
 * main - prints all arguments it receives
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int ii;

	for (ii = 0; ii < argc; ii++)
	{
		printf("%s\n", argv[ii]);
	}

	return (0);
}
