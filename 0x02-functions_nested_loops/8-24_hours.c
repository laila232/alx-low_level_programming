#include "main.h"
/**
 * jack_bauer -  prints every minute of the day ,starting from 00:00 to 23:59.
 * Return: 0 always (success)
 *
 */
void jack_bauer(void)
{
int h, m;
for (h = 0; h <= 23; h++)
{
for (m = 0; m <= 59; m++)
{
if (h < 10)
{
_putchar('0');
_putchar(h + '0');
}
else
{
_putchar(h / 10 + '0');
_putchar(h % 10 + '0');
}
_putchar(':');
if (m < 10)
{
_putchar('0');
_putchar(m + '0');
}
else
{
_putchar(m / 10 + '0');
_putchar(m % 10 + '0');
}
_putchar('\n');
}
}
return (0);
}
