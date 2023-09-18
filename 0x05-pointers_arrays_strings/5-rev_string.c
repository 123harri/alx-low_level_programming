#include "main.h"
/**
 * rev_string - reverses a string in place
 * @s: pointer to the input string
 */

void rev_string(char *s)
{
int length = 0;
int i, j;
while (*s != '\0')
{
length++;
s++;
}

s -= length;
i = 0;
j = length - 1;

while (i < j)
{
char temp = s[i];
s[i] = s[j];
s[j] = temp;
i++;
j--;
}
}
