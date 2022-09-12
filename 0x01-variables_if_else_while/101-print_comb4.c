#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 *
 */
int main(void)
{
	int i, p, m;
	
	for (i = 1; i <=99; i++)
		for (p = 1; p <= 9; p++)
			for (m = 2; m <=99; m++)
				if (m > p && p > i)
					putchar(i + '0');
	putchar(p + '0');
	putchar(m + '0');
	if (i != 7)
		putchar(',');
	        putchar(' ');
	putchar('\n');
	return (0);
}

