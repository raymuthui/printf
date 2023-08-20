#include "main.h"
#include <stdio.h>
/**
 * main - entry
 * Return: 0
 */
int main(void)
{
	char c = 'G';
	char *s = "I am happy!";
	int printed_chars = _printf("Char: %c\nString: %s\nPercent: %%\n", c, s);
	int result;

	printf("\nTotal Characters Printed: %d\n", printed_chars);
	result = _printf("% ");
	printf("Result: %d\n", result);

	return (0);
}
