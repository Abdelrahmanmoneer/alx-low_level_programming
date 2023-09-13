#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * main - a program that prints
  * the opcodes of its own main function
  * @argc: number of args
  * @argv: vector
  *
  * Return: 0
*/

int main(int argc, char **argv)
{
	char *s = (char *)main;
	int z;

	if (argc != 2)
		printf("Error\n"), exit(1);
	z = atoi(argv[1]);
	if (z < 0)
		printf("Error\n"), exit(2);

	while (z--)
		printf("%02hhx%s", *s++, z ? " " : "\n");
	
	return (0);
}
