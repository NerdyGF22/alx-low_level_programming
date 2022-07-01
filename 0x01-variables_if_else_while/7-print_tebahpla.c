# include <stdio.h>

/** main -> program that prints the lowercase alphabet in reverse
 * starts a new line
 * Return : always 0
 */
int main(void)
{
	char ch;
	fot (ch = 'z'; ch >= 'a'; ch--)
	{
		putchar(ch);
	}
	putchar(10);
	return (0);
}
