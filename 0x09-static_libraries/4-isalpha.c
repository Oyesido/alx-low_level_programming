#include "main.h"

/**
 * _isalpha - Checks if a character is an alphabetic character
 *
 * @c: The character to be checked
 *
 * Return: 1 if the character is a letter, 0 otherwise.
 *
 * Description: This function takes a character as ecks if it is
 *              an alphabetic character. If  is a letter (either
 *              lowercase or uppercase), the function returns 1. Otherwise, it
 *              returns 0.
 */
int _isalpha(int c)
{
return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}


