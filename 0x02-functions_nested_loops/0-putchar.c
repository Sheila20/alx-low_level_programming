#include "main.h"

/**
 * main - entry point
 * Return: Always 0
 */

int main(void)
{
char *c = "_putchar";
unsigned long i;
for (i = 0; i <= sizeof(c); i++)
_putchar(c[i]);
_putchar('\n');
return (0);
}
