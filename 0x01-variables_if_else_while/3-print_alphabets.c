#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: Prints the alphabet in lowercase,
 *              followed by the alphabet in uppercase
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int i;

/* Print lowercase alphabet */
for (i = 'a'; i <= 'z'; i++)
{
putchar(i);
}

/* Print uppercase alphabet */
for (i = 'A'; i <= 'Z'; i++)
{
putchar(i);
}

/* Print new line */
putchar('\n');

return (0);
}

