#include <unistd.h>
 
/**
* _putchar - write the charcter c to stdout
* @c: charcter
* Return: on success 1
* on error -1 is returned, and error is set approparetly
*/

int _putchar(char c)
{
	return (write(1, &c, 1));
}
