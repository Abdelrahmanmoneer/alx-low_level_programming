#include "main.h"
/**
  * _strlen - lengthof string
  * @s: string
  * Return: int
*/

int _strlen(char *s)
{
	int size = 0;

	for (; s[size] != '\0'; size++)
	;
	return (size);
}

/**
  * str_concat - a function that concatenates two strings
  * @s1: input1
  * @s2: input2
  * Return: pointer
*/

char *str_concat(char *s1, char *s2)
{
	int size1, size2, a;
	char *m;

	if (s1 == NULL)
		s1 = "\0";
	if (s2 == NULL)
		s2 = "\0";
	size1 = _strlen(s1);
	size2 = _strlen(s2);
	m = malloc((size1 + size2) * sizeof(char) + 1);
	if (m == 0)
		return (0);

	for (a = 0; a <= size1 + size2; a++)
	{
		if (a < size1)
			m[a] = s1[a];
		else
			m[a] = s2[a - size1];
	}
	m[a] = '\0';
	return (m);
}
