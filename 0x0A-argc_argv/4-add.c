#include <stdio.h>
#include <stdlib.h>
/**
  * main - a program that adds positive numbers
  * @argc: int
  * @argv: list
  * Return: 0 or 1
*/

int main(int argc, char *argv[])
{
	int bod = 0;
	char *y;

	while (--argc)
	{
		for (y = argv[argc]; *y; y++)
		{
			if (*y < '0' || *y > '9')
				printf("Error\n");
			return (1);
			bod += atoi(argv[argc]);
		}
	}
		printf("%d\n", bod);
			return (0);
}

