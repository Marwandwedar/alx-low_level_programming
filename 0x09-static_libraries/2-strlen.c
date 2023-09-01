#include "main.h"

/**
 * _strlen - returns the Length of a strlen
 *
 * @s: string parameter input
 *
 * Return: Length of string
*/

int _strlen(char *s)
{
	int counter;

	for (counter = 0; *s != '\0'; s++)
		++counter;

	return (counter);
}
