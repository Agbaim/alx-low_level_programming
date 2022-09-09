#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *main - Entry point
 *
 *Description:Prints a number and whether it is postive, neagtive or zero
 *
 * Return:0
 */
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
printf("%d is %s\n", n, (n > 0) ? "postive"
		                       : ((n < 0) ? "negative" : "zero"));
return (0);
}
