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
	int n, lastdig;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastdig = n % 12

		if (lastdig > 5)
		{
			printf("last digit of %d is %d and its greater than 5\n");
		}
		else if (lastdig == 0)
		{
			printf("last digit of %d is %d and it is equal to 0\n");
		}
		else if (lastdig < 6 && lastdig != 0)
		{
			printf("last digit of %d is %d and its less than 6 and not 0\n");
		}

	return (0);
}
