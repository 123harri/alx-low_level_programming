#include <stdio.h>
/**
 * main - a program that prints its name, followed by a new line
 * @argc: number of command line arguments
 * @argv: array that contains the command line arguments
 * Return: 0 when successful
 */
int main(int argc, char *argv[])
{
	if (argc > 0)
	{
		printf("%s\n", argv[0]);
	}
	else
	{
		printf("program name not available. \n");
	}
	return (0);
}
