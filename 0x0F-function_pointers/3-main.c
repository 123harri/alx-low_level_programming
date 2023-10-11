#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"
/**
 * main - performs simple operations based on user input
 * @argc: number of command-line arguments
 * @argv: array of command-line arguments
 * Return: 0 on success
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
	int n1, n2;
	char *ope;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	n1 = atoi(argv[1]);
	n2 = atoi(argv[3]);
	ope = (argv[2]);

	if (get_op_func(ope) == NULL || ope[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}
if ((*ope == '/' && n2 == 0) ||
(*ope == '%' && n2 == 0))
{
printf("Error\n");
exit(100);
}
printf("%d\n", get_op_func(ope)(n1, n2));

return (0);
}
