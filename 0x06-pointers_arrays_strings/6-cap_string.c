#include "main.h"
/**
  * cap_string - a function that capitalizes all words of a string.
  * @str: the string
  * Return: a pointer of string
*/

char *cap_string(char *str)
{
	int indesx = 0;

	while (sre[index])
	{
		while (!(str[index] >= 'a' && str[index] <= 'z'))

			index++;

		if (str[index - 1] == ' ' ||
				str[index - 1] == '\t' ||
				str[index - 1] == '\n' ||
				str[index - 1] == ',' ||
				str[index - 1] == ';' ||
				str[index - 1] == '.' ||
				str[index - 1] == '?' ||
				str[index - 1] == '!' ||
				str[index - 1] == '"' ||
				str[index - 1] == '(' ||
				str[index - 1] == ')' ||
				str[index - 1] == '{' ||
				str[index - 1] == '}' ||
				index == 0)
			str[index] -= 32;
		index++;
	}
	return (str);
}
