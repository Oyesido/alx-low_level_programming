#include "main.h"

/**
 * _islower - Checks if a character is lowercase
 *
 * @c: The character to be checked
 *
 * Return: 1 if the character is lowercase, 0 otherwise.
 *
 * Description: This function takes a character  checks if it is
 *              a lowercase letter. If the  lowercase letter, the
 *              function returns 1, otherwise it returns 0.
 */
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
return (1);
else
return (0);
}

