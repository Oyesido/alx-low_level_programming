#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: the number to extract the last digit from
 *
 * Return: the value of the last digit
 */
int print_last_digit(int n)
{
    int a;

    /* If n is negative, make it positive */
    if (n < 0)
        n = -n;

    /* Calculate the last digit of n */
    a = n % 10;

    /* If the last digit is negative, make it positive */
    if (a < 0)
        a = -a;

    /* Print the last digit */
    _putchar(a + '0');

    return (a);
}

