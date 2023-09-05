#include "main.h"
/**
  * ** alloc_grid - a function that returns
  * a pointer to a 2 dimensional array of integers
  * @height: input1
  * @width: input2
  * Return:2 dimensioal array
*/

int **alloc_grid(int width, int height)
{
	int **bod, a, b;

	bod = malloc(sizeof(*bod) * height);

	if (height <= 0 || width <= 0 || bod == 0)
	{
		return (NULL);
	}
	else
	{
		for (a = 0; a < height; a++)
		{
			bod[a] = malloc(sizeof(**bod) * width);
			if (bod[a] == 0)
			{
				while (a--);
				free(bod[a]);
				free(bod);
				return (NULL);
			}
			for (b = 0; b < width; b++)
				bod[a][b] = 0;
		}
	}
	return (bod);
}


