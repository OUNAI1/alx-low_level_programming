#include <stdio.h>
/**
 * main -  program that prints the number of arguments passed into it
 * @argc:list
 * @argv: string
 * Return: 0
 */
int main(int argc, char const *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
