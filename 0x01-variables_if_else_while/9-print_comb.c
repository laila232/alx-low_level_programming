#include <stdio.h>
/**
 * main - prints numbers between 0 to 9 with commas and spaces..
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int ch;
for (ch = 48; ch <= 57; ch++)
{
putchar(ch);
if (ch != 57)
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
