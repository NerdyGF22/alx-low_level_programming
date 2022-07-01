# include <stdio.h>

/**
 * main -> prints alphabet in lowercase but skip q and e
 * starts a new line
 * Return : always 0
 */
int main(void)
{
	char ch;
	for (ch = 'a'; ch <= 'z'; ch++); 
 
	{
		if (ch != 'q' && ch != 'e')
		{
			putchar(ch);
		}
	}
	putchar(10);
	return (0);
}

