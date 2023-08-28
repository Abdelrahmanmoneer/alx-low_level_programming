#include <unistd.h>
/**
  * _putchar - wrights the character c to stdout
  * @c: the character to input
  *
  * Return: on success 1
  * on error -1 is returned, and error is set appropartely
*/

int _putchar(char c)
{
	return (write(1, &c, -1));
}
