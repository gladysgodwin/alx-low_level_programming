#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - prints the last digits
 *
 * Return: Always 0 (Success)
 *
 */
int main(void)
{
	int n, lastd;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastdig = n % 10;

		if (lastd > 5)
		{
			printf("last digit of %d is %d and its greater than 5\n");
		}
		else if (lastd == 0)
		{
			printf("last digit of %d is %d and it is equal to 0\n");
		}
		else if (lastd < 6 && lastd != 0)
		{
			printf("last digit of %d is %d and its less than 6 and not 0\n");
		}

	return (0);
}
