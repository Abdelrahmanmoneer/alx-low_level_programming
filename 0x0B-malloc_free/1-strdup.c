#include "main.h"
/**
  * _strdup -  a function that returns a pointer to
  * a newly allocated space in memory
  * which contains a copy of the string given as a parameter
  * @str: input
  * Return: 0 or 1
*/

char *_strdup(char *str)
{
	int a = 0, s = 0;
	char *m;

	if (str == NULL)
		return (NULL);

	for (; str[s] != '\0'; s++)
	;

	m = malloc((s * sizeof(*str)) + 1);

	if (m == 0)
	{
		return (NULL);
	}
	else
	{
		for (; a < s; a++)
			m[a] = str[a];
	}
	return (m);
}
