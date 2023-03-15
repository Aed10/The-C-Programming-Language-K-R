#include <stdio.h>
#include <string.h>
/**
 * reverse - To reverse a string.
 *
 * @str: string to reverse.
 *
 * Return: Pointer to the new string.
 */
void reverse(char *str)
{
	char *end = str + strlen(str) - 1;
	char *start = str;
	while (start < end)
	{
		char tmp = *start;
		*start = *end;
	       	*end = tmp;
		
		/*Move pointers*/
		start ++;
		end --;	
	}
}

int main()
{
	char str[] = "Hello";
	reverse(str);
	printf(" Reverse%s\n", str);
}
