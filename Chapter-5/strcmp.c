#include <stdio.h>
/**
 * strcmp - compare two strings.
Access denied * @s: The first one.
 * @t: the Second one.
 * Return: 0 if s == t or the difference of the first position where s
 * and t diagree.
 */
int strcmp(char *s, char *t)
{
	while (*s == *t)
	{
		if (*s == '\0')
			return (0);
		s++;
		t++;
	}
		return (*s - *t);
}
int main()
{
	char s[] = "Hello";
	char t[] = "Helloo";
	int n;
	n = strcmp(s, t);
	printf("the comparaison : %d\n", n);

}
