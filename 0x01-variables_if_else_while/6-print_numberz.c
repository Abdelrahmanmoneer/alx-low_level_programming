#include<stdio.h>
/**
  * main - entry point
  *
  * Description: print single digit numbers
  *
  * Return: Always 0 (Succeaa)
*/
int main(void)
{
	int digit = 0;

	while (digit <= 9)

	{
		putchar(digit + '0');
		digit++;
	}
	putchar('\n');

	return (0);
}
