# include <stdio.h>

/** main -> program that prints all different possible combinations of two digits
 * starts a new line
 * seperated by comma and spaces
 * Return : always 0 
 */
int main(void)
{
	int ch;
	int n;
	for (ch = 48; ch <= 57; ch++)
	{
		for (n = 49; n <= 57; n++)
		{
			if (n > ch)
			{
				putchar(ch);
				putchar(n);
				if (ch != 56 || n != 57)
				{
					putchar(44);
					putchar(32);
				}
			}
		}
	}
}
