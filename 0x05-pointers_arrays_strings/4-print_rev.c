#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @s: pointer to the string to check
 * Return: void
 */

void print_rev(char *s)
{
	int i = 0;

	while (s[i])
		i++;

	while (i--)
	{
		putchar(s[i]);
	}
	putchar('\n');
}
