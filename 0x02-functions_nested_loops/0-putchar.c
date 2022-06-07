#include "_putchar"

/**
 * main - entry point
 * Description: Prints 0-putchar.c with _putchar
 * Return: Always 0
 */

int main(void)
{
int i = 0;
char c;
char s[] = "_putchar\n";
while (i <= 9)
{
c = s[i];
_putchar(c);
i++;
}
return (0);
}
