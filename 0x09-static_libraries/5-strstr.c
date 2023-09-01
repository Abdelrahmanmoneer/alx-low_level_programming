#include "main.h"
/**
  * _strstr -  function that locates a substring.
  * @haystack: string
  * @needle:input
  * Return: Always success
*/

char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *a = haystack;
		char *f = needle;

		while (*a == *f && *f != '\0')
		{
			a++;
			f++;
		}

		if (*f == '\0')
		{
			return (haystack);
		}
	}
	return (0);
}
