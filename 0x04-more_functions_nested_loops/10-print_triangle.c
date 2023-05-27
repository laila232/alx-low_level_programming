#include "main.h"
#include<stdio.h>
/**
 * print_triangle -  prints a triangle, followed by a new line.
 *@size: the size of the triangle.
 * Return: Always 0 (success)
 */
void print_triangle(int size)
{
int i, j, z;
if (size <= 0)
{
_putchar('\n');
}
else
{
for (i = 1; i <= size; i++)
{
for (j = 1; j <= size; j++)
{
if (i + j <= size)
{
_putchar(' ');
}
else
{
_putchar('#');
}
}
_putchar('\n');
}
}
}
