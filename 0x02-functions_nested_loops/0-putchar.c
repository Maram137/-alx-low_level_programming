#include "main.h"
/**
*print_times_table - Prints the times table of a given number
*@n: The number to print the times table for
*/
void print_times_table(int n)
{
int i, j, product;
if (n < 0 || n > 9)
return;
for (i = 0; i <= n; i++)
{
for (j = 0; j <= n; j++)
{
product = i * j;
if (j == 0)
_putchar('0' + product);
else
{
_putchar(' ');
_putchar(' ');												
if (product < 10)											
_putchar(' ');
else if (product >= 10 && product < 100)										_putchar(' ');	
printf("%d", product);													
}						        
if (j != n)
_putchar(',')
}
_putchar('\n');
}
}
/**
*main - Entry point
*Return: Always 0
*/
int main(void)
{
 print_times_table(9);
return (0);
}

