#include <stdio.h>
#include <stdlib.h>
/**
 * main - a program that adds positive numbers
 * @argc: number of command line arguments
 * @argv: array that contain the command line arguments
 * Return: 0 when successful
 */
int main(int argc, char *argv[])
{
int i, sum;
if (argc < 2)

{
printf("0\n");
return (0);
}

sum = 0;

for (i = 1; i < argc; i++)

{

char *endptr;

long num = strtol(argv[i], &endptr, 10);

if (*endptr != '\0' || num < 0)

{
printf("Error\n");
return (1);
}
sum += num;
}
printf("%d\n", sum);
return (0);
}
