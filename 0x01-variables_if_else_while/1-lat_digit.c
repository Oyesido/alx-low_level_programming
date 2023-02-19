#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point of the program
 * Description: Assigns a random number to the variable n and
 * Return: 0
 */
int main(void)
{
srand(time(NULL)); /* Seed the random number generator*/
int n = rand(); /* Assign a random integer to n */
printf("Last digit of %d is ", n); /* Print the message digit */
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

