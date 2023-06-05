#include <stdio.h>
/**
 * main - prints the first 50 Fibonacci numbers, starting with 1 and 2.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
unsigned long fib1 = 0, fib2 = 1, s;
int i;
for (i = 0; i < 50; i++)
{
s = fib2 + fib1;
printf("%lu", s);
fib1 = fib2;
fib2 = s;
if (i < 49)
printf(", ");
else
printf("\n");
}
return (0);
}
