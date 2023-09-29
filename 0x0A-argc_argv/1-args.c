#include <stdio.h>
/**
 * main - a program that prints the number of arguments passed into it
 * @argc: number of the command line arguments
 * @argv: array that contain the program command line arguments
 * Return: 0 when successful
 */
int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
