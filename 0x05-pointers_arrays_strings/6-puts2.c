#include "main.h"

/**
 * puts2 - print characters of a string followed by a new line
 * @s: pointer to the string
 * Return: void
 */

void puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (i % 2 == 0)
		{
			putchar(str[i]);
		}

		i++;

	}
	putchar('\n');

}
