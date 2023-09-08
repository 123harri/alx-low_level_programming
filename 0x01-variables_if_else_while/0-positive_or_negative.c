#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* main - Entry point
* This function generates a random number and prints whether it is positive,
* negative, or zero.
* Return: Always 0 (Success)
*/
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
printf("The number %d is %s\n", n
(n > 0) ? "positive" :
(n < 0) ? "negative" :
"zero");
return (0);
}

