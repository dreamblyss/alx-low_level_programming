#include <stdlib.h>
#include "main.h"

/**
 * *array_range - creates an array of integers
 * @min: minimum of values stored
 * @max: maximum range of values stored and number of elements
 *
 * Return: pointer to the new array
 */
int *array_range(int min, int max)
{
int *prt;
int i, size;

if (min > max)
{
return (NULL);
}

size = max - min + 1;

prt = malloc(sizeof(int) * size);

if (prt == NULL)
{
return (NULL);
}

for (i = 0; min <= max; i++)
{
prt[i] = min++;
}
return (prt);
}
