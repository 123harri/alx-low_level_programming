#include "main.h"
#include <stdio.h>
#include <stdlib.h>

#define ERR_MSG "Error"
/**
 * is_digit - Function to check if a character is a digit
 * @s: The character to be checked
 * Return: 1 if it is a digit, 0 otherwise
 */
int is_digit(char *s)
{
int i = 0;
while (s[i])
{
if (s[i] < '0' || s[i] > '9')
return (0);
i++;
}
return (1);
}
/**
 * _strlen - returns the length of a string
 * @s: string to evluate
 * Return: the length of a string
 */
int _strlen(char *s)
{
int i = 0;
while (s[i] != '\0')
{
i++;
}
return (i);
}
/**
 * errors - handles errors for main
 */
void errors(void)
{
printf("Error\n");
exit(98);
}
/**
 * main - Function to multiply two positive numbers
 * @argc: The number arguments
 * @argv: array of arguments
 * Return: always 0 (success)
 */
int main(int argc, char *argv[])
{
char *s1, *s2;
int len1, len2, len, i, c, d1, d2, *res, a = 0;

s1 = argv[1], s2 = argv[2];
if (argc != 3 || !is_digit(s1) || !is_digit(s2))
errors();
len1 = _strlen(s1);
len2 = _strlen(s2);
len = len1 + len2 + 1;
res = malloc(sizeof(int) * len);
if (!res)
return (1);
for (i = 0; i <= len1 + len2; i++)
res[i] = 0;
for (len1 = len1 - 1; len1 >= 0; len1--)
{
d1 = s1[len1] - '0';
c = 0;
for (len2 = _strlen(s2) - 1; len2 >= 0; len2--)
{
d2 = s2[len2] - '0';
c += res[len1 + len2 + 1] + (d1 *d2);
res[len1 + len2 + 1] = c % 10;
c /= 10;
}
if (c > 0)
res[len1 + len2 + 1] += c;
}
for (i = 0; i < len - 1; i++)
{
if (res[i])
a = 1;
if (a)
_putchar(res[i] + '0');
}
if (!a)
_putchar('0');
_putchar('\n');
free(res);
return (0);
}
