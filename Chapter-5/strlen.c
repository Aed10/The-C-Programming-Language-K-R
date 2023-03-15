#include <stdio.h>
/**
 * str_len - Give the length of a string.
 *
 * @str: string.
 *
 * Retrun: The length of a string
 */
int str_len(char *str)
{
	char *p = str;

	while (*p != '\0')
		p++;
	return (p - str);
}
int main()
{	
	int n;
	char *s= "Hello World";

	n = str_len(s);
	printf("length: %d\n", n);
	return 0;
}
