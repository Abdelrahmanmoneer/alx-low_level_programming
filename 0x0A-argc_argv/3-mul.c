#include <stdio.h>
#include <stdlib.h>
/**
  * main - a program that multiplies two numbers, followed by newline
  * @argc: int
  * @argv: list
  * Return: 0 on success, 1 if not
*/

int main(int argc, char *argv[])
{
	int mult;

	if (argc == 3)
	{
		mult = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", mult);
	}
	else
	{
		printf("Erorr\n");
	return (1);
	}
	return (0);
}
