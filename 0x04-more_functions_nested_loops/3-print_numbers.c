#include "main.h"
/**
 * print_numbers - prints the numbers, from 0 to 9.
 *
 * Return: Always 0 (success)
 */
void print_numbers(void)
{
int ch;
for (ch = 48; ch <= 57; ch++)
{
putchar(ch);
}
putchar('\n');
}
