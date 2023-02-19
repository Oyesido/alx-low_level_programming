#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point of the program
 *
 * Description: Assigns a random number to the variable n and prints
 * the last digit of n and whether it is greater than 5, 0 or less than 6
 *
 * Return: Always 0
 */
int main(void)
{
int n;
int lastDigit;

srand(time(NULL)); /* Seed the random number generator */

n = rand() - RAND_MAX / 2; /* Assign a random integer to n between  */

printf("Last digit of %d is ", n); /* Print the message digit */

lastDigit = n % 10; /* Get the last digit of n */

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

