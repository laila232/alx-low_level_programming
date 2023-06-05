#include <stdio.h>
/**
 * main - prints all possible combinations of single-digit numbers.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int ;
for (i = 48; i <= 57; i++)
{
putchar(i);
if (i != 57)
{
putchar(',');
putchar(' ');
}
else
{
putchar('\n');
}
}
return (0);
}
