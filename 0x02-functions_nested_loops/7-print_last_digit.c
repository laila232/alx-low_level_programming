#include "main.h"
/**
 * print_last_digit - prints the last digit of a number..
 * @n: takes in integer type input for function
 * Return: Returns the value of the last digit of the input
 *
 */
int print_last_digit(int n)
{
if (n >= 0)
{
int last_digit = n % 10;
return (last_digit);
}
else
{
int last_digit = (-n) % 10;
return (last_digit);
}
}
