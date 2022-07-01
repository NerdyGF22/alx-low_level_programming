# include <stdio.h>

/** main -> program that prints all numbers of base 10 from zero with ASCII
 * starts new line 
 * Returns : always 0
 */
int main(void)
{
	int n;
	for (n = 0 ; n <= 10; n++)
	{
		printf("%d", n);
	}
	printf("\n");
	return(0);
}
