#include <unistd.h>
 
   /**
     * _putchar - write the charcter c to stdout
     * @c: charcter
     * Return: on success 1 uon error -1
   */
   
   int _putchar(char c)
  {
          return (write(1, &c, 1));
}
