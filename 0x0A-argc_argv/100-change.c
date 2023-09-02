#include <stdio.h>
#include <stdlib.h>
/**
  * main -  a program that prints the minimum number of coins
  * to make change for an amount of money
  * @argc: int
  * @argv: list
  * Return: 0 or 1
*/

int main(int argc, char *argv[])
{
	if (argc == 2)
	{
		int k, leastcents = 0, money = atoi(argv[1]);
		int cents[] = {25, 10, 5, 2, 1};

		for (k = 0; k < 5; k++)
		{
			if (money >= cents[k])
			{
				leastcents += money / cents[k];
				money = money % cents[k];
				if (money % cents[k] == 0)
				{
					break;
				}
			}
		}
		printf("%d\n", leastcents);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
