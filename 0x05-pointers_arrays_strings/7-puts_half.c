#include "main.h"

/**
 * puts_half - prints half of a string followed by a new line
 * @str: pointer to the string
 * Return: void
 */

void puts_half(char *str)
{
	int i = 0;
	int a = 0;

	while (str[i] != '\0')
		i++;
	a = i / 2;

	if (i % 2 == 1)
		a++;
	while (a < i)
	{
		putchar(str[a]);
		a++;
	}
	putchar('\n');
}
