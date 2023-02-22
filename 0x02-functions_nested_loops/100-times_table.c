#include "main.h"

/**
* print_times_table - prints the n times table, starting with 0
* @n: number of the times table
*/
void print_times_table(int n)
{
if (n < 0 || n > 15)
{
return;
}

for (int i = 0; i <= n; i++)
{
print_times_row(i, n);
}
}

/**
* print_times_row - prints a single row of the times table
* @i: the row number
* @n: the maximum value for the table
*/
void print_times_row(int i, int n)
{
for (int j = 0; j <= n; j++)
{
print_times_value(i * j, j == 0);
}
_putchar('\n');
}
/**
* print_times_value - prints a single value in the times table
* @value: the value to print
* @first: whether this is the first value in the row
*/
void print_times_value(int value, bool first)
{
if (first)
{
_putchar(value + '0');
}
else if (value < 10)
{
_putchar(',');
_putchar(' ');
_putchar(' ');
_putchar(' ');
_putchar(value + '0');
}
else if (value < 100)
{
_putchar(',');
_putchar(' ');
_putchar(' ');
_putchar(value / 10 + '0');
_putchar(value % 10 + '0');
}
else
{
_putchar(',');
_putchar(' ');
_putchar(value / 100 + '0');
_putchar(value / 10 % 10 + '0');
_putchar(value % 10 + '0');
}
}

