#include "main.h"

/**
 * print_alphabet - Prints all alphabet in lowercase
 *
 * Description: This function prints alphabet in lowercase to the console
 *              using the _putchar function. The function iterates through each
 *              letter from 'a' to 'z' using a for loop and calls the _putchar
 *              function to print each letter. Finally, the function prints a
 *              newline character to the console.
 */
void print_alphabet(void)
{
char letter;

for (letter = 'a'; letter <= 'z'; letter++)
_putchar(letter);

_putchar('\n');
}

