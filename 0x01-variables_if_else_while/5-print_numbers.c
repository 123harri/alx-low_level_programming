#include <stdio.h>
/**
 * main - programm that prints the alphabet in lower and upper case
 * Return: Always  0
 */
int main(void)
{
char letter;
for (letter = 'a'; letter <= 'z'; letter++)
{
if (letter != 'e' && letter != 'q')
putchar(letter);
}
putchar('\n')
return (0);
}
