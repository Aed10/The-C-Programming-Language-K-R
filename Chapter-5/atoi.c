#include <stdio.h>
/**
 * atoi - to convert a string to int.
 *
 * @s: String.
 *
 * Return: Nothing.
 */

int atoi(char *s)
{	
	int sign;
	int n;

	for(; *s == ' ' || *s == '\n' || *s == '\t'; s++)
		; /*Skip special Char*/
	
	sign = 1;
	if(*s == '+' || *s == '-')
	{
		sign = (*s == '+') ? 1 : -1;
		s++;
	}
	for(n = 0; *s >= '0' && *s <= '9'; s++)
	{
		n = 10 * n + *s - '0';
	}
	return (sign * n);
}
int main()
{
	char s[] = "   -123     ";
	printf("The s is :%s , its Valu int: %d\n", s, atoi(s));
}
