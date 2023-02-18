#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
printf("Size of char: %i byte(s)\n"
"Size of int: %i byte(s)\n"
"Size of long int: %i byte(s)\n"
"Size of long long int: %i byte(s)\n"
"Size of float: %i byte(s)\n",
sizeof(char), sizeof(int), sizeof(long int),
sizeof(long long int), sizeof(float));
return (0);
}

