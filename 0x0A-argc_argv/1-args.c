#include <stdio.h>
/**
  * main -  a program that prints the number of
  * arguments passed into it
  * @argc: input1
  * @argv: input2
  * Return: 0 success
*/

int main(int argc, char *argv[])
{
	(void)argv;

	printf("%d\n", argc - 1);
	return (0);
}
