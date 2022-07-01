# include <stdli.h>
# include <time.h>
# include <stdio.h>

/**
 * main - main entry
 *
 * description:print random numbers to
 *
 * variable n time it is executed and prints out
 * based on a condition
 *
 * Return : Always 0 (Success)
 */
int main(void)
{
int n;

srand(time(0))
	;
n = rand() -  RAND_MAX / 2;
if (n > 0)
	printf("%d is positive\n", n);
if (n == 0)
	printf("%d is zero\n", n);
if (n < 0)
{
	printf("%d is negative\n", n);
}
return (0);
}
