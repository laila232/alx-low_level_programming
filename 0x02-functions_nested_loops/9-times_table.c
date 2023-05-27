#include "main.h"
/**
 * times_table - prints the 9 times table, starting with 0.
 *
 * Return: 0 always (success)
 */
void times_table(void)
{
int i, j, m;
for (i = 0; i <= 9; i++)
{
for (j = 0; j <= 9; j++)
{
m = i * j;
if (m <= 9)
{
putchar (m + '0');
}
else
{
putchar(m / 10 + '0');
putchar (m % 10 + '0');
}
if (j < 9)
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
}
}
