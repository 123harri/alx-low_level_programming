#include <stdio.h>
/**
 * main - prints the lowercase alphabets in reverse, followed by a new line
 * Return: Always 0
 */
int main(void)
{
char letter = 'z';
while (letter >= 'a')
{
putchar(letter);
letter--;
}
putchar('\n');
return (0);
}
