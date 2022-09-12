#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry-level
 *
 * Return: Always 0 (success/correct)
 */
int main(void)
{
	char alphabet;																																for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
	       if (alphabet == 'q')
	               continue;
	       else if (alphabet == 'e')
	                continue;
	       putchar(alphabet);
	}
	       putchar('\n');
	       return (0);
}
