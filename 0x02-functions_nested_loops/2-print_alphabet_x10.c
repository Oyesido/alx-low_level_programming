#include "main.h"

/**
 * print_alphabet_x10 - Prints 10 times in lowwer  followed by a new line
 *
 * Description: This function prints the alphabet in lowercase to the console
 *              10 times using a while loop. The outer while loop is used to
 *              repeat the printing process 10 times. The inner while loop is
 *              used to print each character from 'a' to 'z'. Finally, the
 *              function prints a newline character to the console after
 *              each iteration.
 */
void print_alphabet_x10(void)
{
char ch;
int i = 0;

while (i < 10)
{
ch = 'a';

while (ch <= 'z')
{
_putchar(ch);
ch++;
}

_putchar('\n');
i++;
}
}

