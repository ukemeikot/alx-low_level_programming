#include "main.h"

/**
 * alloc_grid -  a function that returns a pointer
 * to a 2 dimensional array of integers.
 * @width: the with of the array
 * @height: the height of the array
 * Return: The function should return NULL
 * on failure
 * If width or height is 0 or negative, return NULL
 */

int **alloc_grid(int width, int height)
{
	int **array;
	int a, j;


	if (width == 0 || height == 0)
		return (NULL);
	array = malloc(sizeof(int) * height);
	if (array == NULL)
		return (NULL);
	for (a = 0; a < height; a++)
	{
		array[a] = malloc(sizeof(int) * width);
		if (array[a] == NULL)
		{
			/*for (j = 0; j < a; j++)
			{
				//free(array[j]);
			}
			//free(array);*/
			return (NULL);
		}
		for (j = 0; j < width; j++)
		{
			array[a][j] = 0;
		}
	}
	return (array);
}
