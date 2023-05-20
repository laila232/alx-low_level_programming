#include <stdio.h>
/**
 * main - prints numbers between 012 to 789.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int i, j, e;
for (i = 48; i <= 55; i++)
{
for (j = 49; j <= 56; j++)
{
for (e = 50; e <= 57; e++)
{
if (j > i && e > j)
{
putchar(i);
putchar(j);
putchar(e);
if (i != 55 || j != 56 || e !=  57)
{
putchar(',');
putchar(' ');
}
}
}
}
}
putchar('\n');
return (0);
}
