#include <stdio.h>
/**
 * strcat - concatenate two strings (Pointer version)
 * @s: first string
 * @t: Second string
 * Return: Pointer to the new string.
 */

void str_cat(char *s, char *t)
{
	while (*s != '\0')
		s++;
	while(*t != '\0')
	{
		*s = *t;
		s++;
		t++;
	}
	*s = '\0';

}
		
int main()
{
	char s[20] = "Hello";
	char t[] = "World";

	str_cat(s,t);
	printf("Phrase: %s\n", s);
	return 0;
}
