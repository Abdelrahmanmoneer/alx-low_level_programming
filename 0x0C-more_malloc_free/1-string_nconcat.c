#include "main.h"
#include <stdio.h>
/**
  * *string_nconcat - a function that concatenates two strings
  * @s1: char
  * @s2: char
  * @n: unsigned int
  * Return: 0 or 1
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *bod;
	unsigned int a, b, s1_length, s2_length;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (s1_length = 0; s1[s1_length] != '\0'; s1_length++)
		;
	for (s2_length = 0; s2[s2_length] != '\0'; s2_length++)
		;
	bod = malloc(s1_length + n + 1);
	if (bod == NULL)
	{
		return (NULL);
	}
	for (a = 0; s1[a] != '\0'; a++)
		bod[a] = s1[a];
	for (b = 0; b < n; b++)
	{
		bod[a] = s2[b];
		a++;
	}

	bod[a] = '\0';
	return (bod);
}
