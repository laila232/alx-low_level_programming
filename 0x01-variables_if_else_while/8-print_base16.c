#include <stdio.h>
/**
 * main - prints numbers of base 16 in lowercase.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char ch;
for (ch = 48; ch <= 57; ch++)
{
putchar(ch);
}
for (ch = 'a'; ch <= 'f'; ch++)
{
putchar(ch);
}
putchar('\n');
return (0);
}
