#include <stdio.h>
#include <stdlib.h>
/**
 * multiply - multiplies two positive numbers
 * @num1: first number
 * @num2: second number
 * @result: pointer to store the result
 * Return: the length of the result
 */
int multiply(char *num1, char *num2, int **result)
{
	int len1 = 0, len2 = 0, i, j, c, p, final_index;
	int *res;

while (num1[len1] != '\0')
	len1++;
while (num2[len2] != '\0')
	len2++;

res = malloc(sizeof(int) * (len1 + len2));
if (res == NULL)
	exit(98);

for (i = 0; i < len1 + len2; i++)
	res[i] = 0;
for (i = len1 - 1; i >= 0; i--)
{
	c = 0;
for (j = len2 - 1; j >= 0; j--)

	p = (num1[i] - '0') * (num2[j] - '0') + res[i + j + 1] + c;
res[i + j + 1] = p % 10;
c = p / 10;
}
res[i + j + 1] += c;

for (i = 0; i < len1 + len2; i++)
{
if (res[i] != 0)
break;
}
*result = malloc(sizeof(int) * (len1 + len2 - i));
if (*result == NULL)
exit(98);
final_index = i;
for (i = final_index, j = 0; i < len1 + len2; i++, j++)
(*result)[j] = res[i];
free(res);
return (len1 + len2 - final_index);
}
/**
 * main - program entry point
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 on success, 98 on failure
 */

int main(int argc, char *argv[])
{
int *result;
int result_len, i, j;

if (argc != 3)
exit(98);

for (i = 1; i < argc; i++)
{
for (j = 0; argv[i][j] != '\0'; j++)
{

if (argv[i][j] < '0' || argv[i][j] > '9')
exit(98);
}
}
result_len = multiply(argv[1], argv[2], &result);

for (i = 0; i < result_len; i++)
putchar(result[i] + '0');
putchar('\n');
free(result);
return (0);
}
