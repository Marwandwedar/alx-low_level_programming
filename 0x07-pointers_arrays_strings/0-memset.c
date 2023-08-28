#include "main.h"

/**
 * *_memset - fills memory with a constant bytes.
 * @s: pointer to put the constant
 * @b: Constant
 * @n: max bytes to use
 * Return: pointer s
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int ngm;

	for (ngm = 0; n > 0; ngm++, n--)
	{
		s[ngm] = b;
	}

	return (s);
}
