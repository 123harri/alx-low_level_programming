#include "main.h"
#include <stdio.h>
/**
 * rot13 - function that encodes a string using ROT13
 * @input: input string to be encoded
 * Return: newly allocated string containing ROT13 encoded result
 */
char *rot13(char *input)
{
int k, r;
char data1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char datarot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

for (k = 0; input[k] != '\0'; k++)
{
for (r = 0; r < 52; r++)
{
if (input[k] == data1[r])
{
input[k] = datarot[r];
break;
}
}
}
return (input);
}
