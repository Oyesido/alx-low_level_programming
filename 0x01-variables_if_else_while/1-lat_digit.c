#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point of the program
 * Description: Assigns a random number to the variable n and prints the last
 * digit of n, along with a message indicating whether it's greater than 5, less
 * than 6 but not 0, or 0.
 * Return: 0 on success
 */
int main(void)
{
	srand(time(NULL)); /* Seed the random number generator with the current time */
	int n = rand(); /* Assign a random integer to n */
	printf("Last digit of %d is ", n); /* Print the message before the last digit */

	int lastDigit = n % 10; /* Get the last digit of n */
	printf("%d ", lastDigit); /* Print the last digit */

	if (lastDigit > 5)
	{
		printf("and is greater than 5\n");
	}
	else if (lastDigit == 0)
	{
		printf("and is 0\n");
	}
	else
	{
		printf("and is less than 6 and not 0\n");
	}

	return (0);
}

