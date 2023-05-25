#include "main.h"
/**
 * print_line - draws a straight line in the terminal.
 *@n: the number of times the character _ should be printed.
 * Return: Always 0 (success)
 */
void print_line(int n)
{
int i;
if (n > 0)
{
for (i = 1; i <= n; i++)
{
putchar('_');
}
}
else
putchar('\n');
}
