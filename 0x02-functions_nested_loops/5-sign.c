#include "main.h"

/**
 * print_sign - Prints the sign of a number
 *
 * @n: The number to check
 *
 * Return: 1 and prints "+" if n is greater than zero,
 *         0 and prints "0" if n is zero,
 *        -1 and prints "-" if n is less than zero.
 *
 * Description: This function takes an integer as input and prints the sign of
 *              the number. If the number is greater than zero, the function
 *              returns 1 and prints "+". If the number is zero, the function
 *              returns 0 and prints "0". If the number is less than zero, the
 *              function returns -1 and prints "-".
 */
int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n == 0)
{
_putchar('0');
return (0);
}
else if (n < 0)
{
_putchar('-');
}

return (-1);
}


