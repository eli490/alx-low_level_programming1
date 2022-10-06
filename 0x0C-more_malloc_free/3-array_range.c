#include "main.h"

/**
 * array_range - creates an array of integers.
 * @min: smalles int.
 * @max: largest int.
 * Return:pointer to the array or NULL.
 */

int *array_range(int min, int max)
{
	int *p = NULL, *p_tmp = NULL;

	if (min > max)
		return (NULL);

	p = p_tmp = malloc(sizeof(int) * (max - min + 1));
	if (!p)
		return (NULL);
	while (min <= max)
	{
		*p_tmp++ = min++;
	}
	return (p);
}
