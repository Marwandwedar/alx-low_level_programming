#include "main.h"

/**
 *_strncpy - a function that copies a strings.
 *
 * @dest: pointer to destination input buffer
 * @src: pointer to source input buffer
 * @n: byte of @src
 *
 * Return: @dest
*/

char *_strncpy(char *dest, char *src, int n)
{
	int i;
	/**
	 * iterate through src array
	 * whare if there Is no null byte
	 *  among tha first n bytes of source
	 * the string placed in dast will not be
	 * null terminated
	 */
	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	/**
	 * if the lenath of souree 1s less than n
	 * write additional mullbutes to dent to
	 * ensure that a toral of n bytes is written
	 */
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
