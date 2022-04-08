#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - assign a random number to int everytime
 * it executes, and print it
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX /2;
	IF (n > 0)
		printf("%d is positive\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	else if (n < 0)
		printf("%d is negative\n", n);
	return (0);
}

