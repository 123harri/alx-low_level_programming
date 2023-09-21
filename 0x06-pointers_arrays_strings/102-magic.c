#include <stdio.h>
/**
 * main - Entry point of the program.
 *
 * Description: This program demonstrates how to modify an array element
 * using a pointer without modifying the array itself.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int n;
int a[5];
int *p;

a[2] = 1024;
p = &n;

p[5] = 98;
printf("a[2] = %d\n", a[2]);
return (0);
}
