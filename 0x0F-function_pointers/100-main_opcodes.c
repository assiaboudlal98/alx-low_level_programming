#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * main - check the code for the school students.
 * @argc: the number of args
 * @argv: argument vector
 * Return: 0
 */
int main(int argc, char **argv)
{
	char *d = (char *)main;
	int f;

	if (argc != 2)
		printf("Error\n"), exit(1);
	f = atoi(argv[1]);
	if (f < 0)
		printf("Error\n"), exit(2);

	while (f--)
		printf("%02hhx%s", *d++, f ? " " : "\n");
	return (0);
}
