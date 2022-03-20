#include <stdio.h>

/**
 * main - print all single digit numbers of base 10 starting for 0
 *
 * Return: Always 0 (Success)
 *
 */
int main(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
		putchar(i);

	putchar('\n');
	return (0);
}
