#include <stdio.h>
#include <stdlib.h>
/**
 * create_array-create an array of chars
 * @size: the size of the array
 * @c: specific char
 *
 * Returns: NULL if size = 0
 * Returns: a pointer to the array, or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *arr;

	if (size == 0)
	{
		return(NULL);
		
	}
	arr = malloc(sizeof(char) * size);

	/* check if malloc was successful */

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}
	return (arr);

}


