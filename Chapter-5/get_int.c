#include <stdio.h>

/**
 * get_int - get int from the user.
 *
 * @pn: pointer.
 *
 * Return: Nothing
 */
int get_int(int *pn)
{
	int c, sign;

	while ((c = getchar()) == ' ' || c == '\n' || c == '\t')
		; /*Skip white spacces.*/
	sign = 1;
	if (c == '+' || c == '-') /*Record Sign*/
	{			
		sign = (c == '+') ? 1 : -1;
		c = getchar();
	}
	for (*pn = 0; c >= '0' && c <= '9'; c = getchar())
		*pn = 10* *pn + c - '0';
	*pn *= sign;
	if(c != EOF);
		ungetc(c, stdin);	
	return (c);
}
int main()
{
	int n;
	get_int(&n);
	printf("number n %d\n", n);
	return 0;
}

